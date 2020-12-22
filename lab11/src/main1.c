#include <stdio.h>
#define N 10

void masscount(int *mass){
	int counter=0, mass2[N*2]={0},number=0;
	int *p_mass=&mass[0],*p_mass2=&mass2[0];
	while(counter<=N){
		int numbercount=0,numberinto=0,i=0;
		int *p_masive=&mass[0];
		for(i;i<=N;i++){	//Every element amount
			if(*p_masive==number){
				numbercount++;
			}
			*p_masive++;
		}
		if(numbercount>1){
			*p_mass2=number;
			*p_mass2++;
			*p_mass2=numbercount;
			*p_mass2++;
		}
		i=0;
		number++;
		numbercount=0;
		counter++;
	}
	p_mass2=&mass2[0];
    	for(int i=0;*(p_mass2+i)!=0;i++){
        printf("%d ", *(p_mass2+i));
    }
}

int main(){
	int *mass=(int*)malloc(N*sizeof(int*));
	
	for(int i=0;i<N;i++){ //Make memory space for masive
		mass[i]=(int*)malloc(N*sizeof(int));
	}
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			*(mass+i)=rand()%10+1;
		}
	}
	masscount(mass);
	free(mass);
	return 0;
}
