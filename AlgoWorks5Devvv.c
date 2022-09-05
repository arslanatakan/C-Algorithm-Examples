#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float sayi1=1.0,sayi2=1.0;
	int sayac=1;
	float toplam=0;
	int kacAdim;
	
	printf("Kac adim hesaplayayim? ");
	scanf("%d",&kacAdim);
	
	for(;sayac<=kacAdim;sayac++)
	{
		if(sayac%2==1)
		{
			toplam=toplam+(sayi1/sayi2);
			sayi2=sayi2+2;
		}
		else
		{	
			toplam=toplam-(sayi1/sayi2);
			sayi2=sayi2+2;
		}
	}
	printf("\nToplam = %.6f",toplam);
	
	
	
	return 0;}
