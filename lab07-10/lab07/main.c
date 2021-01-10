/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdarg.h>
/**
@brief This function checking count of couples in which first number is less then the second.
@param[in] n First number in arguments is the number of numbers which we put into int n.
@param[in]  All the others numbers are just list of numbers.
*/
int couplecount(int n,...){
	va_list args;
	int i=0,size=n,counter=0;
	int mass[size];
	size=0;
	va_start(args, n);
	for(size;i<n;i++){   /*Fill masive with given numbers*/
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
@brief Simple int main, where we enter our data.
*/
int main(){
	int couples = 0;
	couples=couplecount(5,4,2,4,6,7);
	return 0;
}
