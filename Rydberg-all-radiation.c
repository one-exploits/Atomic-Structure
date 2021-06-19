#include <stdio.h>
#include <stdlib.h>
int Hspectrum(int);
int main(){
	int series;
printf("\t  @Hydrogen Spectrum");
printf("\n [1]Lyman");
printf("\n [2]Balmer");
printf("\n [3]Paschen");
printf("\n [4]Brackett");
printf("\n [5]Pfund\n\n");
scanf("%d",&series);
Hspectrum(series);
}
int Hspectrum(int series){
	const int bamerConst=109677;
	float none=series;
	float ntwo=(none+1);
	double wavelenght;
	double nFraction;
	while(1){
	nFraction=(((ntwo*ntwo)-(none*none))/(none*none*ntwo*ntwo))*(bamerConst);
	wavelenght=((1)/(nFraction))*10000000;
	printf("\n WAVELENGTH (λ)==%f  nm",wavelenght);
    system("sleep 1");
	ntwo++;
	}
	
	return 0;
	} 
