/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
@brief This function generates a random number and returns it.
*/
int get_rand(){
	srand(time(NULL));
	int a;
	a=rand()%10;
	return a;
}
/**
@brief This function calculates the greatest common divisor of two numbers.
@param[in] first the first argument is written to this parameter.
@param[in] second The second argument is written to this parameter.
*/
int nodcounter(int first,int second){
	int nod=0,a=0;
	while(a<=first && a<=second){
		a++;
		if(first%a==0 && second%a==0){
			nod=a;
		}
	}
	return nod;
}
/**
@brief This is a normal int main, in which two numbers are specified, two more are created by the generator, after which the function is called to calculate their largest, common divisor.
*/
int main(){
	int first = 21,second = 17,nod1,first2=0,second2=0,nod2;
	nod1=nodcounter(first,second);
	first2 = get_rand();
	second2 = get_rand();
	nod2=nodcounter(first2,second2);
	return 0;
}
