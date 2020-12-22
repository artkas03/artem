#include <stdio.h>

int main(){
	char mass[]="Hello, my name is Artem!";
	int i=0, counter=0;
	for(counter;mass[i]!='\0';i++){
		if(mass[i]=='a' || mass[i]=='A'){
			counter++;
		}
		else if(mass[i]=='e' || mass[i]=='E'){
			counter++;
		}
		else if(mass[i]=='i' || mass[i]=='I'){
			counter++;
		}
		else if(mass[i]=='o' || mass[i]=='O'){
			counter++;
		}
		else if(mass[i]=='u' || mass[i]=='U'){
			counter++;
		}
		else if(mass[i]=='y' || mass[i]=='Y'){
			counter++;
		}
	}
	return 0;
}

