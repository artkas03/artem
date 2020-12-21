#include <stdio.h>
#define N 15

int main(){
	int mass2[N]={0};
	int mass[N]={-6,2,4,6,2,-9,6,33,-11,5,2,23,1,-2,1},sum=0,sum1=0;
	int *p_mass=&mass[0], *p_mass2=&mass2[0];
	while(p_mass<&mass[N]){
		int size=0,counter=0;
		while(*p_mass>=0 && *p_mass<=9999){
			if(p_mass>&mass[N]){
				break;
			}
			sum1=sum1+*p_mass;
			size++;
			*p_mass++;
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
	return 0;
}
