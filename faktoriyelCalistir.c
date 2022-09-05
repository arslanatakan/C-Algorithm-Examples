#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int);

int main(void) {
	int sayi;
	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz : ");
	scanf("%d",&sayi);
	printf("%d ! = %d",sayi,faktoriyel(sayi));
		
	return 0;}

int faktoriyel(int sayi){
	int i=1,fak=1;
	for(;i<=sayi;i++)
		fak*=i;
	return fak;
}
