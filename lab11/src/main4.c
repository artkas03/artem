#include <stdio.h>
#define N 3

void diagonalmaker(int **mass,int cols,int rows){
	int mass2[N]={0};
	int *p_mass2=&mass2[0];
	int j=0;
	for(int i=0;i<N;i++){
		*p_mass2=*(*(mass+i)+j);
		p_mass2++;
		j++;
	}
	
}

int main(){
	int mass1[N][N]={0};
	int **mass=(int**)malloc(N*sizeof(int*));
	
	for(int i=0;i<N;i++){ //Make memory space for masive
		mass[i]=(int*)malloc(N*sizeof(int));
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			*(*(mass+i)+j)=rand()%10;
		}
	}
	
	diagonalmaker(mass,N,N);
	
	for(int i=0;i<N;i++){ //Delete massive from memory
		free(mass[i]);
	}
	free(mass);
}
