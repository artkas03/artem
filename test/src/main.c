#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
 
long long calc_size_file(char	*dir){
	static int err_code=0; // для запоминания ошибки
	long long  sum_size=0; // для размера файла
	DIR *dp; // поток каталога
	struct dirent *entry; // для имени и индекса файла
	struct stat statbuf; // для информации о файле
	if((dp=opendir(dir))==NULL){  // если не смогли открыть поток каталога
        	err_code=1; // запоминаем это
        	return -1;
    	}
    // а если все нормально, то
	chdir(dir);  // перемещаемся в указанную директорию
    // цикл по всем файлам указанной директории
	while((entry=readdir(dp))!=NULL && !err_code){ 
	lstat(entry->d_name, &statbuf); // считываем информацию о файле в структуру
	if(S_ISDIR(statbuf.st_mode)){ // если это директория
            // проверяем является ли она . или ..
		if(strcmp(".", entry->d_name)==0 || strcmp("..", entry->d_name)==0) // и если да,
			continue; // то игнорируем ее, возвращаясь в начало цикла
 
            // прибавляем к общему размеру размер текущей директории
            // ( 4096 -  обычно такой размер имеют директории, но если в директории МНОГО данных, то размер может быть и больше )
            // далее считаем размер всех файлов, содержащихся в текущей директории и прибавляем к общему размеру
            // а чтобы посчитать - РЕКУРСИВНО вызововем нашу функцию и т.о. спустимся на уровень ниже
            	sum_size+=(long long)statbuf.st_size+calc_size_file(entry->d_name); // РЕКУРСИЯ
		if(err_code) // если была ошибка,
		return -1; // то завершаем функцию с ошибочным кодом возврат
        }
        	else{ 
            // иначе - если это НЕ директория, то прибавляем к общему размеру текущей директории размер данного файла 
			sum_size+=(long long)statbuf.st_size;
        	}
	}
    // после того как закончили считать размер очередной директории - перемещаемся на уровень выше
    // т.е. в предыдущию директорию
	chdir("..");
	closedir(dp); // закрываем поток каталога
	return sum_size; // а если все нормально, то возвращаем искомый размер
}

void sizeofcatalog(char* dir){
	DIR *dp; // поток каталога
    	struct dirent *entry; // для имени и индекса файла
    	struct stat statbuf; // для информации о файле
    	if((dp=opendir(dir))==NULL){ // если не смогли открыть поток каталога
        	fprintf(stderr, "cannot open directory: %s\n", dir); // выводим сообщение об ошибке
        	return; // выходим из функции
    	}
	chdir(dir); // перемещаемся в указанную директорию  
	long long totalsize=0;
	while ((entry=readdir(dp))!=NULL){ // цикл по всем файлам указанной директории
		lstat(entry->d_name, &statbuf); // считываем информацию о файле в структуру
		if(S_ISDIR( statbuf.st_mode)){ // если это директория
 
            // проверяем является ли она . или .. 
			if(strcmp(".", entry->d_name)==0 || strcmp("..", entry->d_name)==0) // и если да,
				continue; // то игнорируем ее, возвращаясь в начало цикла
            // считаем размер директории      
			long long size = calc_size_file( entry->d_name );
            // если размер посчитать не удалось, то
			if (size==-1)
				printf("%c\t%s\t\t%s\n", 'd', "unknow", entry->d_name); // выводим на экран информацию об этом
			else // а если все в порядке
                // выводим информацию о директории
			totalsize+=(long long)statbuf.st_size+size;
        	}
        	else{ // иначе - если это НЕ директория, то выводим информацию о файле
			totalsize+=(long long)statbuf.st_size;
		}
	}
    
	printf("Total size of catalog: %.2f Kbytes\n", (double)totalsize/1000);
 
	closedir( dp ); // закрываем указаннню директорию
}

int main() {
	char dirname[100];
	printf("Enter directory: ");
	gets(dirname);
    	// выводим сообщение о том какую директорию сканируем
	sizeofcatalog(dirname); // выводим на экран тип, размер, имя файлов указанной директории
    	return 0;
}

