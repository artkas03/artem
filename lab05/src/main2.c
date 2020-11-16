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
	};
	b=b-1;
	if(b==a){
		prostoe=1;
	}
	else{
		prostoe=0;
	};
	return 0;
}
