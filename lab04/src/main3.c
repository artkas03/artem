#include <stdio.h>

int main(){
	int k=20,m=15,n=10,i;
	if(k>m || m>n){
		if(k>m){
			i=k;
			k=m;
			m=i;	
		};
		if(m>n){
			i=m;
			m=n;
			n=i;
		};
		if(k>m){
			i=k;
			k=m;
			m=i;	
		};
	};
	return 0;
}
