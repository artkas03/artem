#include <stdio.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
	printf("Enter directory:");
	char dirname[100];
	scanf("%s",dirname);
	catalog(dirname,0);
	return 0;
}

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

