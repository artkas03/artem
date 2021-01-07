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
void calculator(char *mass,int size){
	int mass2[6];
	int opplace=0,razryad=1,numstart=0,res=0,perem=0,counter=0,lastopplace=0,h=0;
	int *p_mass2=&mass2[0];
	for(int i=0;i<=size+1;i++){ /*write numbers into masive*/
		if(*(mass+i)=='1'){
			*(p_mass2+i)=1;
		}
		else if(*(mass+i)=='2'){
			*(p_mass2+i)=2;
		}
		else if(*(mass+i)=='3'){
			*(p_mass2+i)=3;
		}
		else if(*(mass+i)=='4'){
			*(p_mass2+i)=4;
		}
		else if(*(mass+i)=='5'){
			*(p_mass2+i)=5;
		}
		else if(*(mass+i)=='6'){
			*(p_mass2+i)=6;
		}
		else if(*(mass+i)=='7'){
			*(p_mass2+i)=7;
		}
		else if(*(mass+i)=='8'){
			*(p_mass2+i)=8;
		}
		else if(*(mass+i)=='9'){
			*(p_mass2+i)=9;
		}
		else if(*(mass+i)=='0'){
			*(p_mass2+i)=0;
		}
		else if(*(mass+i)!='1' && *(mass+i)!='2' && *(mass+i)!='3' && *(mass+i)!='4' && *(mass+i)!='5' && *(mass+i)!='6' && *(mass+i)!='7' && *(mass+i)!='8' && *(mass+i)!='9' && *(mass+i)!='0'){
			int l=0;
			for(int j=numstart;*(mass+j)=='1' || *(mass+j)=='2' || *(mass+j)=='3' || *(mass+j)=='4' || *(mass+j)=='5' || *(mass+j)=='6' || *(mass+j)=='7' || *(mass+j)=='8' || *(mass+j)=='9' || *(mass+j)=='0';j++){ /*find number*/
				counter++;
			}
			for(int q=1;q<counter;q++){ /*count rank of the number*/
				razryad=razryad*10;
			}
			for(int g=numstart;l!=counter;g++){ /*convert into right number*/
				perem=perem+*(p_mass2+g)*razryad;
				if(razryad>1){
					razryad=razryad/10;
				}
				l++;
			}
			if(lastopplace==0){ 
				res=perem;
			}
			if(*(mass+opplace)=='+'){	/*decide which opperation need to be used*/
				res=res+perem;
			}
			else if(*(mass+opplace)=='-'){
				res=res-perem;
			}
			else if(*(mass+opplace)=='*'){
				res=res*perem;
			}
			else if(*(mass+opplace)=='/'){
				res=res/perem;
			}
			for(h;*(p_mass2+h)==1 || *(p_mass2+h)==2 || *(p_mass2+h)==3 || *(p_mass2+h)==4 || *(p_mass2+h)==5 || *(p_mass2+h)==6 || *(p_mass2+h)==7 || *(p_mass2+h)==8 || *(p_mass2+h)==9 || *(p_mass2+h)==0;h++){
				opplace++;
			}
			h++;
			numstart=numstart+counter+1;
			counter=0;
			perem=0;
			lastopplace=opplace;
		}
	}
}
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	char mass1[]="17+14";
	char *p_mass=&mass1[0];
	int size=0;
	for(int i=0;*(p_mass+i)!='\0';i++){
		size++;
	}
	char *mass=(char*)malloc(size*sizeof(char*));
	
	for(int i=0;i<size;i++){
		*(mass+i)=*(p_mass+i);
	}
	calculator(mass,size);
	free(mass); /*Delete masive*/
	return 0;
}
