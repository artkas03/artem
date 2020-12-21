#include <stdio.h>
#define N 10

int main(){
	int mass[N]={5,1,5,3,5,7,1,2,3,3,5},counter=0, mass2[N*2]={0},number=0;
	int *p_mass=&mass[0],*p_mass2=&mass2[0];
	while(counter<=N){
		int numbercount=0,numberinto=0,i=0;
		int *p_masive=&mass[0];
		for(i;i<=N;i++){	//Кількість кожного елемента
			if(*p_masive==number){
				numbercount++;
			}
			*p_masive++;
		}
		if(numbercount>1){
			*p_mass2=number;
			//numberinto++;
			*p_mass2++;
			*p_mass2=numbercount;
			*p_mass2++;
		}
		i=0;
		number++;
		//numberinto++;
		numbercount=0;
		counter++;
	}
	return 0;
}
