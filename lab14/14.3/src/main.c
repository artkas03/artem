#include <stdio.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

double catalog(char *dirname){
	int deskriptor,file;
	FILE *fdesk;
	double size=0;
	struct stat statbuf;
	char dname[1000];
	DIR *d;
	struct dirent *dir;
	d=opendir(dirname);
	fdesk=fopen(dir->d_name,"w");
	deskriptor=fileno(fdesk);
	printf("%d\n",deskriptor);
	while((dir=readdir(d))!=NULL){
		if (dir->d_name[0]=='.')
			continue;
          	file=openat(deskriptor, dir->d_name, O_RDONLY);
          	printf("%d\n",file);
		if(fstat(file, &statbuf)==0 && (statbuf.st_mode & S_IFDIR)){
			strcpy(dname,dirname);
			strcat(dname,"/");
			strcat(dname,dir->d_name);
			size=size+catalog(dname);
		}
		else{
			size=size+(double)statbuf.st_size;
		}
		close(fdesk);
	}
	closedir(d);
	return size;
}

int main(){
	double size=0;
	printf("Enter directory:");
	char dirname[100];
	scanf("%s",dirname);
	size=catalog(dirname);
	printf("Total size of catalog: %f bytes\n", size);
	return 0;
}
