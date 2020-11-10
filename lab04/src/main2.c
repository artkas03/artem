#include <stdio.h>

int main(){
	float a,b,c;
	a=123.656;
	b=(a-(int)a)*1000;
	b=(int)b;
	c=b/(int)a;
	c=c*100;
	c=(int)c;
	c=(float)c/100;
	return 0;
}	
