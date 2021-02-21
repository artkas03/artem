/**
@mainpage
@author Artem Kasyanov
@date 02.02.2021
@version 1.0
*/
#include <stdio.h>
#define N 3
#pragma warning (disable:4996)
/**
@brief This function gets name and surname of author and outputs it into the console.
*/
void author(){
	char massname[50]="";
	char name="";
	char labnum[5]="";
	char theme[150]="";
	printf("");
	gets(massname);
	printf("Введите фамилию автора: ");
	gets(massname);
	printf("Введите имя автора:");
	name=getc(stdin);
	printf("Фамилия автора: ");
	puts(massname);
	printf("Имя автора: ");
	putc(name,stdout);
	printf("\n");
	printf("Введите номер лабораторной работы: ");
	gets(labnum);
	printf("");
	gets(labnum);
	printf("Введите тему лабораторной работы: ");
	gets(theme);
	printf("Тема лабораторной работы №%s: %s",labnum,theme);
	printf("\n");
	printf("---------------------");
	printf("\n");
}
/**
@brief This function searches for the longest uninterrupted sequence out of all elements of given masive than puts this element into result masive.
@param[in] *p_mass This param is a pointer of a given masive.
*/
void diagonalmaker(int **mass,int cols,int rows){
	int mass2[N]={0},save=0;
	int *p_mass2=&mass2[0];
	int j=0,l=0;
	for(int i=0;i<N;i++){ /*Fill result masive with numbers from main diagonal from given N*N masive*/
		*(p_mass2+l)=*(*(mass+i)+j);
		j++;
		l++;
	}
	j=0;
	for(int i=0;i<N;i++){
		for(int y=0;y<N;y++){
			if(*(p_mass2+y)>*(p_mass2+i)){
				save=*(p_mass2+i);
				*(p_mass2+i)=*(p_mass2+y);
				*(p_mass2+y)=save;
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%d\n",*(p_mass2+i));
	}
}
/**
@brief This is a simple int main function.
*/
int main(){
	char mas[]="Узнать имя и фамилию автора?(1-да, 0-нет):";
	write(1,&mas,sizeof(mas));
	char check='1';
	read(0,&check,1);
	if(check=='1'){
		author();	
	}
	int **mass=(int**)malloc(N*sizeof(int*));
	
	for(int i=0;i<N;i++){ /*Make memory space for masive*/
		*(mass+i)=(int*)malloc(N*sizeof(int));
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("Введите элемент матрицы:");
			scanf("%d",&*(*(mass+i)+j));
		}
	}
	
	diagonalmaker(mass,N,N);
	
	for(int i=0;i<N;i++){ /*Delete massive from memory*/
		free(mass[i]);
	}
	free(mass);
	
	return 0;
}
