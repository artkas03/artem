#include <stdio.h>
#define N 10
#define maxvalue 30 

void masscounter(float *mass){
	float i=0,counter=0,count=0,highestinarow=0,mass2[N]={0},diff=0;
	float *p_mass=&mass[0],*p_mass2=&mass2[0];
	
	while(i<N){
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
	
	while(counter<=highestinarow){
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

int main(){
	float mass1[N]={0};
	float *mass=&mass1[0];
	
	
	for(int i=0;i<N;i++){
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
	masscounter(mass);
	return 0;
}
