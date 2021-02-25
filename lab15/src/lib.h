#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ownerofinst{
	char name[10];
	char surname[10];
	char email[20];
};

struct education_inst{
	char if_edu_free[20];
	char name_of_inst[30];
	long int count_of_students;
	struct ownerofinst owner_of_inst;
	char start_of_day[15];
};

void getfromfile(char *name_of_file, struct education_inst *mass);
