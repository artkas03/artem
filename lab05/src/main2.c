#include <stdio.h>

int main(){
	int a,c,prostoe,b;
	a=8;
	c=0;
	b=0;
	while(c<=a){
		c++;
		if(a%c==0)
		b=b+c;
	}
	/*do{
		c++;
		if(a%c==0){
		b=b+c;
		}
	}while(c<=a)*/
		
	/*for(c;c<=a;c++){
		c++;
		if(a%c==0)
		b=b+c;
	}*/
	if(b==a){
		prostoe=1;
	}
	else{
		prostoe=0;
	}
	b=b-1;
	return 0;
}
