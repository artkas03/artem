/**
@mainpage
@author Artem Kasyanov
@date 20.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief This function counts number of consonant letters.
@param[in] mass The first argument is written to this parameter.
*/
int counter(char mass[]){
	int i=0, counter=0;
	for(counter;mass[i]!='\0';i++){
		if(mass[i]!='a' && mass[i]!='A' && mass[i]!='e' && mass[i]!='E' && mass[i]!='i' && mass[i]!='I' && mass[i]!='o' && mass[i]!='O' && mass[i]!='u' && mass[i]!='U' && mass[i]!='y' && mass[i]!='Y' && mass[i]!=' ' && mass[i]!=',' && mass[i]!='!' && mass[i]!='?'&& mass[i]!='.'){
			counter++;
		}
	}
	return counter;
}
/**
@brief Normal int main in which the character array is written.
*/
int main(){
	int sizeofmass=0,count=0;
	char mass[]="Hello, my name is Artem!";
	while(mass[sizeofmass]!='\0'){
		sizeofmass++;
	}
	count=counter(mass);
	return 0;
}
