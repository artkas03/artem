#include <stdio.h>

int main(){
	FILE *data;
	char a[6]="3";
	char mass[10]="";
	data=fopen("src/data.txt","r");
	fgets(a,6,data);
	fclose(data);
	for(int y=0;y<1;y++){
		printf("%s",&a[y]);
	}
	return 0;
} 
