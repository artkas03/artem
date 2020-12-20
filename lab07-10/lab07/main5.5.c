/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief Ця функція вираховує корінь з переданого числа.
@param[in] number Перший аргумент записується у цей параметр.
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
@brief Це звичайний int main, у якому вказуюється число, після чого визивається функція, дли вирахування його кореня.
*/
int main(){
	int num=16,sqrt;
	sqrt=sqrtcount(num);
	return 0;
}
