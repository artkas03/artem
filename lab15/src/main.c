#include "lib.h"

int main(){
	char sort;
	int numofstruct=0,maxnumofstud=0;
	struct education_inst mass[SIZE];
	char name_of_struct[20];
	printf("Enter file with data: ");
	char name_of_file[20];
	gets(name_of_file);
	numofstruct=getfromfile(name_of_file, mass); /*Get info about structures*/
	printtofile(mass,numofstruct); /*Print info into file*/
	printtoconsole(mass,numofstruct); /*Print out info to console*/
	printf("\n1.If education free?\n2.Name of inst.\n3.Count of students.\n4.Name of owner.\n5.Surname of owner.\n6.Email of owner.\n7.Start of the day.\nEnter number which field to sort: ");
	sort=getc(stdin);
	if(sort=='2'){
		sortalph(mass, numofstruct);
	}
	else if(sort=='3'){
		maxstud(mass, numofstruct);
		printtoconsole(mass,numofstruct);
	}
	return 0;
}
