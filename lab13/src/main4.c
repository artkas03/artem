/**
@mainpage
@author Artem Kasyanov
@date 21.12.2020
@version 1.0
*/
#include <stdio.h>
/**
@brief This function searches for the longest uninterrupted sequence out of all elements of given masive than puts this element into result masive.
@param[in] *mass Takes masive.
@param[in] size Takes size of masive.
*/
void shifr(char *mass,int size){
	int counter=0;
	char alphabet[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; /*create masive of alphabet*/
	char *p_alphabet=&alphabet[0];
	char shifralphabet[]="defghijklmnopqrstuvwxyzabcDEFGHIJKLMNOPQRSTUVWXYZABC"; /*create masive of ciphred alphabet*/
	char *p_shifralphabet=&shifralphabet[0];
	char mass2[size];
	char *p_mass2=&mass2[0];
	for(int i=0;i<=size;i++){ /*rewriting sentence*/
		int j=0;
		if(*(mass+i)!=' '){
			for(int y=0;*(mass+i)!=*(p_alphabet+y);y++){
				counter++;
			}
			for(int y=counter;y!=0;y=y-1){
				*(p_mass2+i)=*(p_shifralphabet+j);
				j++;	
			}	
		}
		counter=0;
	}
}
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	char mass1[]="You my friend";
	char *p_mass=&mass1[0];
	int size=0;
	for(int i=0;*(p_mass+i)!='\0';i++){
		size++;
	}
	
	char *mass=(char*)malloc(size*sizeof(char*));
	for(int i=0;i<size;i++){
		*(mass+i)=*(p_mass+i);
	}
	shifr(mass,size);
	free(mass);
	return 0;
}
