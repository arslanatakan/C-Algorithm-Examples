#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sayac,toplam=1,sayi;
	printf("Mukemmel sayi kontrol sihirbazina hosgeldiniz!\nLutfen kontrol edilecek sayiyi giriniz -> "); scanf("%d",&sayi);
	for(sayac=2;sayac<=(sayi/2);sayac++)
	{
		if(sayi%sayac==0)
			toplam+=sayac;
	}
	if(toplam==sayi)
		printf("\n\n%d bir mukemmel sayidir.",sayi);
	else
		printf("\n\n%d mukemmel sayi DEGILDIR.",sayi);
	
	//28 -> 1 + 2 + 4 + 7 + 14 = 28 
	return 0;}
