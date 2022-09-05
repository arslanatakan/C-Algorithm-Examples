#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int sinir,bolenSayi,sayac,asallikBelirteci,asalSayaci=0;
	printf("Kaca kadar olan asal sayilari gormek istersin? --> ");
	scanf("%d",&sinir);
	for(sayac=2;sayac<=sinir;sayac++)
	{
		asallikBelirteci=1;
		for(bolenSayi=2;bolenSayi<sayac;bolenSayi++)
		{
			if(sayac%bolenSayi==0)
			{
				asallikBelirteci=0;
				break;
			}
		}
		if(asallikBelirteci==1)
		{
			asalSayaci++;
			printf("%d bir asaldir.\n",sayac);			
		}		
	}
	printf("\n\n%d tane asal bulundu!",asalSayaci);
		
	return 0;
}


