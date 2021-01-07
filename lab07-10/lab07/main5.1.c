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
@brief Ця функція генерує випадкове число, та повертає його.
*/
int get_rand(){
	srand(time(NULL));
	int a;
	a=rand()%10;
	return a;
}
/**
@brief Ця функція вираховує найбільший спільний дільник двох чисел.
@param[in] first Перший аргумент записується у цей параметр.
@param[in] second Другий аргумент записується у цей параметр.
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
@brief Це звичайний int main, у якому вказуються два числа, ще два створюються генератором, після чого викликаєтсья функція, для підрахування іх найбільшого, спільного дільника.
*/
int main(){
	int first = 21,second = 17,nod1,first2=0,second2=0,nod2;
	nod1=nodcounter(first,second);
	first2 = get_rand();
	second2 = get_rand();
	nod2=nodcounter(first2,second2);
	return 0;
}
