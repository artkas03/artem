#include <stdio.h>

int main(){	
	int a,b,c,d,f;
	a=729;
	b=a%10;
	c=((a-b)%100)/10;
	d=(a-b-c)/100;
	f=b*100+c*10+d;
	return 0;
}
