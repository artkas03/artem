#include <stdio.h>

int main(){
	int num,a,b,c,d,e,f,sum1,sum2,lucky;
	num=194770;
	f=num%10;
	e=(num-f)%100;
	d=(num-e-f)%1000;
	c=(num-d-e-f)%10000;
	b=(num-c-d-e-f)%100000;
	a=(num-b-c-d-e-f);
	e=e/10;
	d=d/100;
	c=c/1000;
	b=b/10000;
	a=a/100000;
	sum1=a+b+c;
	sum2=d+e+f;
	if(sum1==sum2){
		lucky=1;
	}
	else{
		lucky=0;
	}
	return 0;
}
