/**
@mainpage
@author Artem Kasyanov
@date 21.12.2020
@version 1.0
*/
#include <stdio.h>
#define N 10
#define maxvalue 30 
/**
@brief This function searches for the longest uninterrupted sequence out of all elements of given masive than puts this element into result masive.
@param[in] *mass Takes masive.
*/
void masscounter(float *mass){
	float i=0,counter=0,count=0,highestinarow=0,mass2[N]={0},diff=0;
	float *p_mass=&mass[0],*p_mass2=&mass2[0];
	
	while(i<N){ /*Count highest sequence*/
		diff=*p_mass;
		*p_mass++;
		diff=diff-*p_mass;
		if(diff<0){
			counter++;
			if(counter>highestinarow){
				highestinarow=counter;
			}
		}
		else if(diff>0){
			counter=0;
		}
		diff=0;
		i++;
	}
	
	highestinarow++;
	counter=0;
	p_mass=&mass[0];
	
	while(counter<=highestinarow){ /*Fill result masive with the numbers of the highest sequence*/
		diff=*p_mass;
		*p_mass++;
		diff=diff-*p_mass;
		if(diff<0 || counter==highestinarow){
			*p_mass--;
			*p_mass2=*p_mass;
			*p_mass2++;
			*p_mass++;
		}
		else if(diff>0 && counter!=highestinarow){
			counter=0;
			p_mass2=&mass2[0];
			while(*p_mass2!=0){
				*p_mass2=0;
				*p_mass2++;
			}
			p_mass2=&mass2[0];
		}
		counter++;
	}

}
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	float mass1[N]={0}; /*Initialize masive*/
	float *mass=&mass1[0];
	
	
	for(int i=0;i<N;i++){ /*Fill masive by float random numbers from 0 to 30*/
		for(int j=0;j<N;j++){
			*(mass+j)=rand()%30;
			if((int)*(mass+j)%2!=0){
				*(mass+j)=*(mass+j)/2;
				(float)*(mass+j);
			}
			else if((int)*(mass+j)%3!=0){
				*(mass+j)=*(mass+j)/3;
				(float)*(mass+j);
			}
			else{
				break;
			}
		}
	}
	masscounter(mass); /*Call the masscounter function*/
	return 0;
}
