#include "lib.h"

int main(){
	struct education_inst mass[10];
	char name_of_struct[20];
	printf("Enter file with data: ");
	char name_of_file[20];
	gets(name_of_file);
	getfromfile(name_of_file, mass);	
	return 0;
}
