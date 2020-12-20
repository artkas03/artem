/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief Ця функція визначає, чи є передане число ідеальним, чи ні.
@param[in] number Перший аргумент записується у цей параметр.
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
@brief Це звичайний int main, у якому вказуюється число, а інше число генеруєтсья за допомогою генератора псевдовипадкових чисел, після чого визивається функція, що визначає, чи є число ідеальним, чи ні.
*/
int main(){
	srand(time(NULL));
	int first=15,second=rand()%20,ideal1=0,ideal2=0;
	ideal1=ifideal(first);
	ideal2=ifideal(second);
	return 0;
}
