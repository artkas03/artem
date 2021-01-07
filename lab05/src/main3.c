#include <stdio.h>

int main(){
	int num,a,b,c,d,e,f,sum1,sum2,lucky,num1=100000,counter=0;
	num=194770;
	for(num1;num1<=999999 && num1>99999;num1++){
		f=num1%10;
		e=(num1-f)%100/10;
		d=(num1-e*10-f)%1000/100;
		c=(num1-d*100-e*10-f)%10000/1000;
		b=(num1-c*1000-d*100-e*10-f)%100000/10000;
		a=(num1-b*10000-c*1000-d*100-e*10-f)%1000000/100000;
		sum1=a+b+c;
		sum2=d+e+f;
		if(sum1==sum2){
			counter++;
			if(num1==num){
				lucky=1;
			}
		}
		else{
			continue;
		}
	}
	/*do{
		f=num1%10;
		e=(num1-f)%100/10;
		d=(num1-e*10-f)%1000/100;
		c=(num1-d*100-e*10-f)%10000/1000;
		b=(num1-c*1000-d*100-e*10-f)%100000/10000;
		a=(num1-b*10000-c*1000-d*100-e*10-f)%1000000/100000;
		sum1=a+b+c;
		sum2=d+e+f;
		if(sum1==sum2){
			counter++;
			if(num1==num){
				lucky=1;
			}
		}
		else{
			continue;
		}
		n++	
	}while(num1<=999999 && num1>99999)
	
	while(num1<=999999 && num1>99999){
		f=num1%10;
		e=(num1-f)%100/10;
		d=(num1-e*10-f)%1000/100;
		c=(num1-d*100-e*10-f)%10000/1000;
		b=(num1-c*1000-d*100-e*10-f)%100000/10000;
		a=(num1-b*10000-c*1000-d*100-e*10-f)%1000000/100000;
		sum1=a+b+c;
		sum2=d+e+f;
		if(sum1==sum2){
			counter++;
			if(num1==num){
				lucky=1;
			}
		}
		else{
			continue;
		}
		n++
	}*/

	return 0;
}
