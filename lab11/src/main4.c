/**
@mainpage
@author Artem Kasyanov
@date 21.12.2020
@version 1.0
*/
#include <stdio.h>
#define N 3
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
}
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	srand(time(NULL));
	int **mass=(int**)malloc(N*sizeof(int*));
	
	for(int i=0;i<N;i++){ /*Make memory space for masive*/
		*(mass+i)=(int*)malloc(N*sizeof(int));
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			*(*(mass+i)+j)=rand()%10;
		}
	}
	
	diagonalmaker(mass,N,N);
	
	for(int i=0;i<N;i++){ /*Delete massive from memory*/
		free(mass[i]);
	}
	free(mass);
}
