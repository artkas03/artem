#include <stdio.h>

int main(){
	int a,b,c,d;
	a=562;
	b=a%10;
	c=(a-b)%100;
	d=(a-b-c)/100;
	float e= (float)d/b;
	return 0;
}
