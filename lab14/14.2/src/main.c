/**
@mainpage
@author Artem Kasyanov
@date 25.02.2021
@version 1.0
*/
#include <stdio.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
@brief This is a simple int main, where we initialize our dirname and call catalog function.
*/
int main(){
	printf("Enter directory:");
	char dirname[100];
	scanf("%s",dirname);
	catalog(dirname,0);
	return 0;
}
/**
@brief This function prints out entered by user directory.
@param[in] *dirname Takes masive where user has entered directory.
@param[in] spacecount Number of spaces for graphics.
*/
void catalog(char *dirname,int spacecount){
	char dname[1000];
	DIR *d;
	struct dirent *dir;
	d=opendir(dirname);
	if(d){
		while((dir=readdir(d))!=NULL){
			if(strcmp(dir->d_name,".")!=0 && strcmp(dir->d_name,"..")!=0 && strcmp(dir->d_name,".git")!=0){ /*Print out catalog*/
				for(int i=0;i<spacecount;i++){
					printf("---");
				}
				printf("%s\n",dir->d_name); 
				
			} 
			if(strcmp(dir->d_name, ".")!=0 && strcmp(dir->d_name, "..")!=0){
				strcpy(dname,dirname);
				strcat(dname,"/");
				strcat(dname,dir->d_name);
				catalog(dname,spacecount+1);
			}
		}
	}
	else{
		return;
	}
	closedir(d);
}

