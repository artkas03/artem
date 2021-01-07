/**
@mainpage
@author Artem Kasyanov
@date 21.12.2020
@version 1.0
*/
#include <stdio.h>
#define N 10
/**
@brief This function checks if there are similar element in the massive. If there are similar elemet it counts number of this elements and put it into result masive.
@param[in] *mass This param takes masive.
*/
void masscount(int *mass){
	int counter=0, mass2[N*2]={0},number=0;
	int *p_mass=&mass[0],*p_mass2=&mass2[0];
	while(counter<=N){
		int numbercount=0,numberinto=0,i=0;
		int *p_masive=&mass[0];
		for(i;i<=N;i++){	/*Every element amount*/
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
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	srand(time(NULL));
	int *mass=(int*)malloc(N*sizeof(int*)); /*Build a dynamic masive*/
	
	for(int i=0;i<N;i++){ /*Make memory space for masive*/
		mass[i]=(int*)malloc(N*sizeof(int));
	}
	
	for(int i=0;i<N;i++){ /*Fill masive by random numbers from 1 to 10*/
		for(int j=0;j<N;j++){
			*(mass+i)=rand()%10+1;
		}
	}
	masscount(mass); /*Call the masscounter function*/
	free(mass); /*Delete masive */
	return 0;
}
