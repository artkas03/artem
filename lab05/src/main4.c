#include <stdio.h>

int main(){
	int a,b,c,ideal;
	a=6;
	b=0;
	c=0;
	while(c<=a){
		c++;
		if(a%c==0){
		b=b+c;
		}
		else{
		continue;
		};
	};
	
	/*do{
		c++;
		if(a%c==0){
		b=b+c;
		}
		else{
		continue;
		};
	}while(c<=a)	
	
	for(c;c<=q;++c){
		if(a%c==0){
		b=b+c;
		}
		else{
		continue;
		};
	}*/
	if(b==a){
		ideal=1;
	}
	else{
		ideal=0;
	}
	return 0;
}
