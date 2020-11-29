#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
int bamer(void);
int main(){
	printf("");
	bamer();
	
	
	return 0;
	}
int bamer(){
	
	const int bamerConst=109677;
	float n=3;
	double wavelenght;
	double nFraction;
	while(1){
	nFraction=(((n*n)-(4))/(4*n*n))*(bamerConst);
	wavelenght=((1)/(nFraction))*10000000;
	printf("\nWAVELENGTH (λ)==%f",wavelenght);
   // usleep(20000);//0.5 second
	n++;
	}
	
return 0; 	 
} 