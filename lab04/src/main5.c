#include <stdio.h>

int main(){
	int x,y,error;
	char p;
	x=2;
	error = 0;
	
	if(x>=(-3) && x<=3){
		if(x==(-3) || x==3){
			y=2;
		}
	
		else if(x==(-2) || x==2 || x==0){
			y=1;
		}
		
		else if(x==(-1) || x==1){
			y=0;
		}
	}
	else{
		error=1;
		y=111;
	}
	return 0;
}
