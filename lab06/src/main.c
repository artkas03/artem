#include <stdio.h>

int main(){
	char mass[]="Hello, my name is Artem!";
	int i=0, counter=0;
	for(counter;mass[i]!='\0';i++){
		if(mass[i]!='a' && mass[i]!='A' && mass[i]!='e' && mass[i]!='E' && mass[i]!='i' && mass[i]!='I' && mass[i]!='o' && mass[i]!='O' && mass[i]!='u' && mass[i]!='U' && mass[i]!='y' && mass[i]!='Y' && mass[i]!=' ' && mass[i]!=',' && mass[i]!='!' && mass[i]!='?'&& mass[i]!='.'){
			counter++;
		}
	}
	return 0;
}

