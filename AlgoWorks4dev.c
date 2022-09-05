#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sayi,basamakSayaci=0;
	printf("Basamak sayisi hesaplanacak sayiyi giriniz : ");
	scanf("%d",&sayi);
	
	for(;sayi>0;basamakSayaci++)
		sayi=sayi/10;
			
	printf("\nSayi %d basamaklidir.",basamakSayaci);	
	return 0;}
