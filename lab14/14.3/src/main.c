/**
@mainpage
@author Artem Kasyanov
@date 25.02.2021
@version 1.0
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
/**
@brief This function calculates size of current file.
@param[in] *dir Takes masive with the way to this file.
*/
long long calc_size_file(char	*dir){
	static int err_code=0; /*to remember the error*/
	long long  sum_size=0; /*for file size*/
	DIR *dp; /*directory stream*/
	struct dirent *entry; /*for file name and index*/
	struct stat statbuf; /*for file information*/
	if((dp=opendir(dir))==NULL){  /*if could not open directory stream*/
        	err_code=1;
        	return -1;
    	}
	chdir(dir);  /*move to the specified directory*/
	while((entry=readdir(dp))!=NULL && !err_code){ 
	lstat(entry->d_name, &statbuf); /*read information about a file into a structure*/
	if(S_ISDIR(statbuf.st_mode)){ /*if it's a directory*/
		if(strcmp(".", entry->d_name)==0 || strcmp("..", entry->d_name)==0)
			continue;
            	sum_size+=(long long)statbuf.st_size+calc_size_file(entry->d_name); /*add the size of the current directory to the total size*/
		if(err_code) 
			return -1; 
        }
        	else{ 
			sum_size+=(long long)statbuf.st_size; /*otherwise - if it is NOT a directory, then add the size of this file to the total size of the current directory*/
        	}
	}
	chdir("..");
	closedir(dp); /*close the directory stream*/
	return sum_size; 
}
/**
@brief This function counts and print outs size of catalog.
@param[in] *dir Takes masive with the catalog.
*/
void sizeofcatalog(char* dir){
	DIR *dp; 
    	struct dirent *entry; 
    	struct stat statbuf; 
    	if((dp=opendir(dir))==NULL){ 
        	fprintf(stderr, "cannot open directory: %s\n", dir); /*if we could not open the directory stream, we display an error message*/
        	return; 
    	}
	chdir(dir); /*move to the specified directory*/ 
	long long totalsize=0;
	while ((entry=readdir(dp))!=NULL){
		lstat(entry->d_name, &statbuf); /*read information about a file into a structure*/
		if(S_ISDIR( statbuf.st_mode)){ /*if it's a directory*/
			if(strcmp(".", entry->d_name)==0 || strcmp("..", entry->d_name)==0) 
				continue;     
			long long size=calc_size_file(entry->d_name); /*count directory size*/
			if (size==-1)
				printf("%c\t%s\t\t%s\n", 'd', "unknow", entry->d_name); /*if the size could not be counted, then we display information about this*/
			else
				totalsize+=(long long)statbuf.st_size+size; /*display information about the directory*/
        	}
        	else{ /*otherwise - if it is NOT a directory, then display information about the file*/
			totalsize+=(long long)statbuf.st_size;
		}
	}
	printf("Total size of catalog: %.2f Kbytes\n", (double)totalsize/1000);
	closedir(dp); /*close the specified directory*/
}
/**
@brief This is a simple int main, where we initialize our dirname and call catalog function.
*/
int main() {
	char dirname[100];
	printf("Enter directory: ");
	gets(dirname);
	sizeofcatalog(dirname); /*display the type, size, file name of the specified directory*/
    	return 0;
}
