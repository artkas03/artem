/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief Ця функція вираховує, чи є передане число простим, чи ні.
@param[in] number Цей єдиний параметр, це число, що передається в функцію.
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
@brief Це звичайний int main, у якому вказуюється число, друге число створюється генератором, після чого викликаєтсья функція, для визначення чи просте число, чи ні..
*/
int main(){
	srand(time(NULL));
	int fisrt=6,second=rand()%60,prostoe1,prostoe2;
	prostoe1=pomosh(fisrt);
	prostoe2=pomosh(second);
	return 0;
}
