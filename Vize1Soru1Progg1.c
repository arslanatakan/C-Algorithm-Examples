#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int faktoriyel(int);
int main(void) {
	float seriToplami;
	int adim,x,i;
	printf("Islem kac adim boyunca devam etsin? : (n)"); scanf("%d",&adim);
	printf("Hangi sayi uzerinden islemler yapilsin? : (x)"); scanf("%d",&x);
	for(i=1;i<=adim;i++)
		seriToplami=seriToplami + (pow(x,i)/faktoriyel(i));
	printf("Seri toplaminin sonucu = %.2f 'dir.",seriToplami);
	return 0;}
int faktoriyel(int sayi){
	int sayac,faktoriyel=1;
	for(sayac=1;sayac<=sayi;sayac++)
		faktoriyel=faktoriyel*sayac;
	return faktoriyel;}
