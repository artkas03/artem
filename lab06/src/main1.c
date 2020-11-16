#include <stdio.h>
#define n 14

int main(){
	int a,i,it,m,times;
	char mass[n] = "Ivanov        ";
	a=0;
	i=0;
	it=0;
	while(i<n){
		while(mass[i]!=' '){
			it++;
			i++;
		}
		while(mass[i]==' '){
			a++;
			i++;
		}
	}
	times=it+1;
	i=0;
	m=it+a/2;
	while(times!=0){
		mass[m]=mass[it];
		m=m-1;
		it=it-1;
		times=times-1;
	}
	while(times==0 && m!=it){
		mass[m]=' ';
		m=m-1;
	}
	return 0;		
}
