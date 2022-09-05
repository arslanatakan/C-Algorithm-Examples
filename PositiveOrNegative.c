#include <stdio.h>
//Girilen sayinin negatif - pozitif veya sifir oldugunu yazdiran program.
int main(void) {
	int sayi;
	printf("Sayi girin : "); scanf("%d",&sayi);
	if(sayi>0)
		printf("Sayi pozitif.");
	else if(sayi<0)
		printf("Sayi negatif.");
	else
		printf("Sayi sifir.");
	return 0;}
