#include <stdio.h>

 int main(){
	int a,b,c,d,f;
	a=145;
	b=a%10;
	c=(a-b)%100/10;
	d=(a-b-c)/100;
	f=d*8*8+c*8+b*1;
	return 0;
}
