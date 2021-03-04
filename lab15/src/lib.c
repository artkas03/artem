#include "lib.h"
#define MAX_FILE_SIZE

void getfromfile(char *name_of_file, struct education_inst *mass){	
	FILE *f,*resf;
	int i=0,counter=0;
	f=fopen(name_of_file, "r");
	fseek(f,0,SEEK_SET);
	for(int y=0;!feof(f);y++){
		fscanf(f,"%s",&(mass+y)->if_edu_free);
		fscanf(f,"%s",&(mass+y)->name_of_inst);
		fscanf(f,"%s",&(mass+y)->count_of_students);
		fscanf(f,"%s",&(mass+y)->owner_of_inst.name);
		fscanf(f,"%s",&(mass+y)->owner_of_inst.surname);
		fscanf(f,"%s",&(mass+y)->owner_of_inst.email);
		fscanf(f,"%s",&(mass+y)->start_of_day);
		counter++;
	}
	counter--;
	/*for(int y=0;y<counter;y++){
		printf("\n");
		printf("%s\n",&(mass+y)->if_edu_free);
		printf("%s\n",&(mass+y)->name_of_inst);
		printf("%s\n",&(mass+y)->count_of_students);
		printf("%s\n",&(mass+y)->owner_of_inst.name);
		printf("%s\n",&(mass+y)->owner_of_inst.surname);
		printf("%s\n",&(mass+y)->owner_of_inst.email);
		printf("%s\n",&(mass+y)->start_of_day);
	}*/
	close(f);
	resf=fopen("result.txt", "w");
	fseek(f,0,SEEK_SET);
	for(int y=0;y<counter;y++){
		fprintf(resf,"%s\n",&(mass+y)->if_edu_free);
		fprintf(resf,"%s\n",&(mass+y)->name_of_inst);
		fprintf(resf,"%s\n",&(mass+y)->count_of_students);
		fprintf(resf,"%s\n",&(mass+y)->owner_of_inst.name);
		fprintf(resf,"%s\n",&(mass+y)->owner_of_inst.surname);
		fprintf(resf,"%s\n",&(mass+y)->owner_of_inst.email);
		fprintf(resf,"%s\n",&(mass+y)->start_of_day);
		fprintf(resf,"\n");
	}
	close(resf);
}
