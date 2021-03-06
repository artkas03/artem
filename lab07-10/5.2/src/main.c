/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief This function calculates whether the transmitted number is prime or not.
@param[in] number This single parameter is the number passed to the function.
*/
int pomosh(int number){
	int b=0,c=0,prostoe;
	while(c<=number){
		c++;
		if(number%c==0)
		b=b+c;
	};
	b=b-1;
	if(b==number){
		prostoe=1;
	}
	else{
		prostoe=0;
	}
	return prostoe;
}
/**
@brief This is a normal int main, which specifies a number, the second number is generated by a generator, and then a function is called to determine whether it is a prime number or not.
*/
int main(){
	srand(time(NULL));
	int fisrt=6,second=rand()%60,prostoe1,prostoe2;
	prostoe1=pomosh(fisrt);
	prostoe2=pomosh(second);
	return 0;
}
