#include <stdio.h>

int main(){
	int a,b,c,d,f;
	a=123;
	b=a%10;
	c=(a-b)%100;
	d=(a-b-c)/100;
	float e= (float)d/b;
	e=e*100;
	f=(int)e;
	e=(float)f/100;
	return 0;
}
