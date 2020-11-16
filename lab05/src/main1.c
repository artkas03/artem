#include <stdio.h>
#include <math.h>

int main (){
	int a,b,nod,c;
	a=1400;
	b=140;
	nod=0;
	c=0;
	while(c<=a && c<=b){
		c++;
		if(a%c==0 && b%c==0){
			nod=c;
		}
		
	};
	return 0;
}
