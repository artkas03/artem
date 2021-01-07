/**
@mainpage
@author Artem Kasyanov
@date 21.12.2020
@version 1.0
*/
#include <stdio.h>
#define N 1
/**
@brief This function checks if there are similar element in the massive. If there are similar elemet it counts number of this elements and put it into result masive.
@param[in] *mass This param takes masive.
@param[in] size This param takes size of masive.
*/
void searcher(char *mass,int size){
	char mass2[size],mass3[size];
	char *p_mass2=&mass2[0];
	char *p_mass3=&mass3[0];
	int counter=0,longestword=0,shortestword=15;
	for(int i=0;i<size;i++){ /*found the longest word in the text*/
		int j=i,t=i;
		if(*(mass+i)!=' ' && *(mass+i)!=',' && *(mass+i)!='.' && *(mass+i)!='!' && *(mass+i)!='?'){ //found size of the longest word in the text
			for(int j=i;*(mass+j)!=' ' && *(mass+j)!=',' && *(mass+j)!='.' && *(mass+j)!='!' && *(mass+j)!='?' && *(mass+j)!='\0';j++){
				counter++;
			}
			if(counter>longestword){ /*write the longest word into masive*/
				longestword=counter;
				for(int y=0;*(mass+t)!=' ' && *(mass+t)!=',' && *(mass+t)!='.' && *(mass+t)!='!' && *(mass+t)!='?' && *(mass+t)!='\0';y++){
					*(p_mass2+y)=*(mass+t);
					t++;
				}
			}
		}
		for(int z=i;*(mass+z)!=' ' && *(mass+z)!=',' && *(mass+z)!='.' && *(mass+z)!='!' && *(mass+z)!='?' && *(mass+z)!='\0';z++){
			i++;
		}
		counter=0;
	}
	for(int i=0;i<size;i++){ /*found the shertest word in the text*/
		int j=i,t=i;
		if(*(mass+i)!=' ' && *(mass+i)!=',' && *(mass+i)!='.' && *(mass+i)!='!' && *(mass+i)!='?' && *(mass+i)!='\0'){
			for(int j=i;*(mass+j)!=' ' && *(mass+j)!=',' && *(mass+j)!='.' && *(mass+j)!='!' && *(mass+j)!='?' && *(mass+j)!='\0';j++){/*found size of the shortest word in the text*/
				counter++;
			}
			if(counter<shortestword && counter>3){ /*write the shortest word into masive*/
				shortestword=counter;
				for(int y=0;*(mass+t)!=' ' && *(mass+t)!=',' && *(mass+t)!='.' && *(mass+t)!='!' && *(mass+t)!='?' && *(mass+t)!='\0';y++){
					*(p_mass3+y)=*(mass+t);
					t++;
				}
				for(int y=shortestword;*(p_mass3+y)!='\0';y++){
					*(p_mass3+y)=' ';
				}
			}
		}
		for(int z=i;*(mass+z)!=' ' && *(mass+z)!=',' && *(mass+z)!='.' && *(mass+z)!='!' && *(mass+z)!='?' && *(mass+z)!='\0';z++){
			i++;
		}
		counter=0;
	}
}
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	char mass1[]="I dont know, !English";
	char *p_mass=&mass1[0];
	int size=0;
	for(int i=0;*(p_mass+i)!='\0';i++){
		size++;
	}
	char *mass=(char*)malloc(size*sizeof(char*));
	
	for(int i=0;i<size;i++){
		*(mass+i)=*(p_mass+i);
	}
	searcher(mass,size);
	free(mass); /*Delete masive*/
	return 0;
}
