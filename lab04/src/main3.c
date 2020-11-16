#include <stdio.h>

int main(){
	int k=0,m=0,n=0,i;
	if(k==m && m==n){
		return 1;
	}
	else if(k>m || m>n){
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
