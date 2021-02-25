#include "lib.h"
#define MAX_FILE_SIZE

void getfromfile(char *name_of_file, struct education_inst *mass){	
	FILE *f;
	int i=0;
	f=fopen(name_of_file, "r");
	while(!feof(f)){
		fscanf(f,"%s",&(*(mass+i)->if_edu_free));
		fscanf(f,"%s",&(*(mass+i)->name_of_inst));
		fscanf(f,"%ld",&(*(mass+i)->count_of_students));
		fscanf(f,"%s",&(*(mass+i)->owner_of_inst.name));
		fscanf(f,"%s",&(*(mass+i)->if_edu_free));
		fscanf(f,"%s",&(*(mass+i)->if_edu_free));
	}
	close(f);
}
