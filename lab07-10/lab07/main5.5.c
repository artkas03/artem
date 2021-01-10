/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief This function subtracts the root from the transmitted number.
@param[in] number The first argument is written to this parameter.
*/
int sqrtcount(int number){
	int b=0,sqrt=0;
	if(b<=number){
		while(sqrt!=number){
			b++;
			sqrt=b*b;
		}
	}
	else{
		sqrt=0;
	}
	sqrt=b;
	return sqrt;
}
/**
@brief This is a normal int main, which specifies a number, then calls the function, after subtracting its root.
*/
int main(){
	int num=16,sqrt;
	sqrt=sqrtcount(num);
	return 0;
}
