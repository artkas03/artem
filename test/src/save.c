#include <sys/stat.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

int fsize(FILE *fp){
    int prev=ftell(fp);
    fseek(fp, 0L, SEEK_END);
    int sz=ftell(fp);
    fseek(fp,prev,SEEK_SET); //go back to where we were
    return sz;
}

double sizeofcatalog(char dirname){
	struct dirent *dir;
	long long size=0;
	char dname[1000];
	DIR *d;
	d=opendir
	while(dir=readdir(d)!=NULL){
	
	}

}

int main(){
	long long int size=0;
	FILE *f=fopen("src/main.c","r");
	size=fsize(f);
	printf("%ld",size);
	return 0;
}
