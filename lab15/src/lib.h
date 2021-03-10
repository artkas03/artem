#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

struct ownerofinst{
	char name[10];
	char surname[10];
	char email[20];
};

struct education_inst{
	char if_edu_free[20];
	char name_of_inst[30];
	char count_of_students[10];
	struct ownerofinst owner_of_inst;
	char start_of_day[15];
	int num;
};

int chartoint(char *mass);

void printtofile(struct education_inst *mass,int counter);

int getfromfile(char *name_of_file, struct education_inst *mass);

void printtoconsole(struct education_inst *mass,int counter);

void maxstud(struct education_inst mass[],int counter);

void sortalph(struct education_inst mass[],int numofstruct);
