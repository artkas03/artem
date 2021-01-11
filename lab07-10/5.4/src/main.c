/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief This function determines whether the transmitted number is perfect or not.
@param[in] number The first argument is written to this parameter.
*/
int ifideal(int number){
	int ideal=0,b=0,c=0;
	while(c<=number){
		c++;
		if(number%c==0){
		b=b+c;
		}
		else{
		continue;
		};
	};
	if(b==number){
		ideal=1;
	}
	else{
		ideal=0;
	}
	return ideal;
}
/**
@brief This is a normal int main, which specifies a number and the other number is generated by a pseudo-random number generator, after which a function is called to determine whether the number is ideal or not.
*/
int main(){
	srand(time(NULL));
	int first=15,second=rand()%20,ideal1=0,ideal2=0;
	ideal1=ifideal(first);
	ideal2=ifideal(second);
	return 0;
}