#include <stdio.h>
#define n 20

int main(){
	int i,a,b,c;
	int mass[n];
	i=0;
	a=1;
	c=1;
	b=1;
	while(i<n){	
		while(a%b!=0){
			b++;
		}
		if(a==b){
			mass[i]=a;
			i++;
		}
		a++;
		b=2;
	}
	return 0;
}
