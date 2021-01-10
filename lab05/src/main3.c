#include <stdio.h>
#define N 6

int main(){
	int lucky=0,sum1=0,sum2=0,number=194707,perem1=10,perem2=0,counter=0;
	for(counter;counter<=N;counter++){ 
		if(counter<(N/2)){
			perem2=number%perem1;
			number=number/perem1;
			sum1=sum1+perem2;
		}
		else if(counter>(N/2)){
			perem2=number%perem1;
			number=number/perem1;
			sum2=sum2+perem2;	
		}
	}
	/*do{ 
		if(counter<(N/2)){
			perem2=number%perem1;
			number=number/perem1;
			sum1=sum1+perem2;
		}
		else if(counter>(N/2)){
			perem2=number%perem1;
			number=number/perem1;
			sum2=sum2+perem2;	
		}
		counter++;	
	}while(counter<=N);*/
	
	/*while(counter<=N){
		if(counter<(N/2)){
			perem2=number%perem1;
			number=number/perem1;
			sum1=sum1+perem2;
		}
		else if(counter>(N/2)){
			perem2=number%perem1;
			number=number/perem1;
			sum2=sum2+perem2;	
		}
		counter++;
	}*/
	if(sum1==sum2){
		lucky=1;
	}
	else{
		lucky=0;
	}
	return 0;
}
