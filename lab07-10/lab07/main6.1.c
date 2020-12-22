#include <stdio.h>

int vowelscounter(char mass[]){
	int i=0, numberofvowels=0;
	for(vowelscounter;mass[i]!='\0';i++){
		if(mass[i]=='a' || mass[i]=='A'){
			numberofvowels++;
		}
		else if(mass[i]=='e' || mass[i]=='E'){
			numberofvowels++;
		}
		else if(mass[i]=='i' || mass[i]=='I'){
			numberofvowels++;
		}
		else if(mass[i]=='o' || mass[i]=='O'){
			numberofvowels++;
		}
		else if(mass[i]=='u' || mass[i]=='U'){
			numberofvowels++;
		}
		else if(mass[i]=='y' || mass[i]=='Y'){
			numberofvowels++;
		}
	}
	return numberofvowels;
}

int main(){
	int sizeofmass=0,numberofvowels=0;
	char mass[]="Hello, my name is Artem!";
	while(mass[sizeofmass]!='\0'){
		sizeofmass++;
	}
	numberofvowels=vowelscounter(mass);
	return 0;
}
