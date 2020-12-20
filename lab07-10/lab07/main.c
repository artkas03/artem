/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdarg.h>
/**
@brief Ця функція підраховує кількість пар чисел у масиві, що мают друге число більше за перше.
@param[in] n Перша цифра аргументів це їх кількість, що записується у змінну int n.
@param[in]  Усі інші цифри це список цифр, що повинні передатися у масив.
*/
int couplecount(int n,...){
	va_list args;
	int i=0,size=n,counter=0;
	int mass[size];
	size=0;
	va_start(args, n);
	for(size;i<n;i++){   //Заполнения массива данными числами
		mass[size]=va_arg(args,int);
		size++;
	}
	i=0;
	for(size=0;i<n;i++){
		if(mass[size]<mass[size+1]){
			counter++;
		}
		size++;
	}
	va_end(args);
	return counter;
}
/**
@brief Це звичайний int main, в якому ми викликаємо нашу функцію.
*/
int main(){
	int couples = 0;
	couples=couplecount(5,4,2,4,6,7);
	return 0;
}
