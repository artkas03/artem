#include <stdio.h>
#define N 15

void masscounter(int *p_mass){
	int mass2[N]={0},sum=0,sum1=0;
	int *p_mass2=&mass2[0];
	for(int i=0;i<N;i++){
		int size=0,counter=0,j=0;
		while(*(p_mass+j)>=0 && *(p_mass+j)<=9999 && j<N){
			sum1=sum1+*(p_mass+j);
			size++;
			j++;
		}
		if(sum1>sum){
			sum=sum1;
			*p_mass--;
			while(1==1){
				while(*p_mass>0){
					*p_mass--;
				}
				*p_mass++;
				while(*p_mass>0){
					*p_mass2=*p_mass;
					*p_mass2++;
					*p_mass++;
				}
				while(*p_mass2!=0){
					*p_mass2=0;
					*p_mass2++;
				}
				p_mass2=&mass2[0];
				break;
			}
		}
		counter++;
		if(*p_mass<0){
			*p_mass++;
		}
		sum1=0;
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
			*(mass+i)=rand()%30-15;
			if(*(mass+i)==0){
				*(mass+i)=*(mass+i)+1;
			}
	}
	masscounter(mass);
	free(mass);
	return 0;
}
