#include "lib.h"
#define MAX_FILE_SIZE

int getfromfile(char *name_of_file, struct education_inst mass[]){	
	FILE *f;
	int i=0,counter=0,y=0;
	f=fopen(name_of_file, "r");
	fseek(f,0,SEEK_SET);
	for(y;!feof(f);y++){
		fscanf(f,"%s",&(mass+y)->if_edu_free);
		fscanf(f,"%s",&(mass+y)->name_of_inst);
		fscanf(f,"%s",&(mass+y)->count_of_students);
		fscanf(f,"%s",&(mass+y)->owner_of_inst.name);
		fscanf(f,"%s",&(mass+y)->owner_of_inst.surname);
		fscanf(f,"%s",&(mass+y)->owner_of_inst.email);
		fscanf(f,"%s",&(mass+y)->start_of_day);
		fscanf(f,"%d",&(mass+y)->num);
		counter++;
	}
	counter--;
	close(f);
	return y;
}

void printtofile(struct education_inst mass[],int counter){
	FILE *resf;
	resf=fopen("result.txt", "w");
	fseek(resf,0,SEEK_SET);
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

void printtoconsole(struct education_inst mass[],int counter){
	for(int y=0;y<counter;y++){
		printf("\n");
		printf("%s\n",&(mass+y)->if_edu_free);
		printf("%s\n",&(mass+y)->name_of_inst);
		printf("%s\n",&(mass+y)->count_of_students);
		printf("%s\n",&(mass+y)->owner_of_inst.name);
		printf("%s\n",&(mass+y)->owner_of_inst.surname);
		printf("%s\n",&(mass+y)->owner_of_inst.email);
		printf("%s\n",&(mass+y)->start_of_day);
	}
}

void maxstud(struct education_inst mass[],int counter){
	struct education_inst perem;
	for(int biggest=0;biggest<counter;biggest++){ 
		for(int y=0;y<counter;y++){
			if(atoi((mass+y)->count_of_students)<atoi((mass+biggest)->count_of_students)){
				perem=*(mass+biggest);
				*(mass+biggest)=*(mass+y);
				*(mass+y)=perem;
			}
		}
	}
}

void sortalph(struct education_inst mass[],int numofstruct){
	char alph1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph2[]="abcdefghijklmnopqrstuvwxyz";
	int counter1=0,counter2=0;
	struct education_inst perem;
	for(int counter=0;counter<numofstruct;counter++){ 
		int limit=0;
		for(int y=0;limit<=sizeof(alph1);limit++){
			if((mass+y)->name_of_inst){
				/*perem=*(mass+biggest);
				*(mass+biggest)=*(mass+y);
				*(mass+y)=perem;*/
			}
			y++;
		}
	}
}

