#include <stdio.h>

int main(){
	float x,y,another;
	x=0.5;
	
	if(x<=-1 && x>=-5){
		y=(-1)/x;
	}
	
	else if(x>-1 && x<1){
		y=x*x;
	}
	
	else if(x>=1 && x<=2){
		y=1;
	}
	
	else{
		another=1000;
	}
	return 0;
}
