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
	FILE *result;
	int mass2[6];
	int opplace=0,razryad=1,perem=0,counter=0,fnum=0,snum=0,fors=0,in=0,numpl=0,l=0;
	float res=0;
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
	}
	for(int done=0;done!=1;in++){
		for(numpl;*(mass+numpl)=='1' || *(mass+numpl)=='2' || *(mass+numpl)=='3' || *(mass+numpl)=='4' || *(mass+numpl)=='5' || *(mass+numpl)=='6' || *(mass+numpl)=='7' || *(mass+numpl)=='8' || *(mass+numpl)=='9' || *(mass+numpl)=='0';numpl++){
			counter++;
		}
		for(int y=1;y<counter;y++){
			razryad=razryad*10;
		}
		for(l;counter!=0;l++){
			perem=perem+*(p_mass2+l)*razryad;
			if(razryad>1){
				razryad=razryad/10;
			}
			counter--;
		}
		if(fors==0){
			fnum=perem;
			fors++;
		}
		else if(fors==1){
			snum=perem;
			fors++;
			done++;
		}
		if(opplace==0){
			for(int y=0;*(mass+y)!='+' && *(mass+y)!='-' && *(mass+y)!='/' && *(mass+y)!='*';y++){
				opplace++;
			}
			perem=0;
		}
		numpl++;
		l++;
	}	
	if(*(mass+opplace)=='+'){	/*decide which opperation need to be used*/
		res=fnum+snum;
	}
	else if(*(mass+opplace)=='-'){
		res=fnum-snum;
	}
	else if(*(mass+opplace)=='*'){
		res=fnum*snum;
	}
	else if(*(mass+opplace)=='/'){
		res=(float)fnum/(float)snum;
	}
	printf("%f\n",res);
	result=fopen("result.txt","w");
	fprintf(result,"%f",res);
	fclose(result);
}
/**
@brief it is a int main function where we initialize our masive and call the function.
*/
int main(){
	FILE *data;
	char dataf[10]="data.txt";
	char check[10]="";
	printf("Введите название файла с данными: ");
	gets(check);
	if(strcmp(dataf,check)==0){
		data=fopen("data.txt","r");
		char mass1[10]="";
		fgets(mass1,10,data);
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
		fclose(data);
		
	}
	else{
		printf("Такого файла не существует!");
	}
	return 0;
}
