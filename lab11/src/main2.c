/**
@mainpage
@author Artem Kasyanov
@date 21.12.2020
@version 1.0
*/
#include <stdio.h>
#define N 15
/**
@brief This function searches for the longest uninterrupted sequence out of all elements of given masive than puts this element into result masive.
@param[in] *p_mass Takes masive.
*/
void masscounter(int *p_mass){
	int mass2[N]={0},sum=0,sum1=0;
	int *p_mass2=&mass2[0];
	for(int i=0;i<N;i++){
		int size=0,counter=0,j=0;
		while(*(p_mass+j)>=0 && *(p_mass+j)<=9999 && j<N){ /*Count sum of sequences*/
			sum1=sum1+*(p_mass+j);
			size++;
			j++;
		}
		if(sum1>sum){
			sum=sum1;
			*p_mass--;
			while(1==1){ /*Change elemets in relust masive if sum1>sum*/
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
    	for(int i=0;*(&mass2[i])!=0;i++){
       	 printf("%d ", *(&mass2[i]));
    }
	
}
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	srand(time(NULL));
	int *mass=(int*)malloc(N*sizeof(int*)); /*Make dynamic masive */
	
	for(int i=0;i<N;i++){ /*Make memory space for masive*/
		mass[i]=(int*)malloc(N*sizeof(int));
	}
	
	for(int i=0;i<N;i++){ /*Fill masive by random numbers from -15 to 15*/
			*(mass+i)=rand()%30-15;
			if(*(mass+i)==0){
				*(mass+i)=*(mass+i)+1;
			}
	}
	masscounter(mass); /*Call the masscounter function*/
	free(mass); /*Delete masive */
	return 0;
}
