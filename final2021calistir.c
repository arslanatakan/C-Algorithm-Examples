#include <stdio.h>
#include <stdlib.h>

//0 ile 1 arasinda rastgele sayi tutulur 
//tutulan sayi 0.5'ten kucukse, fibonacci serisinin diger elemani;
//önceki iki elemanin TOPLANMASI ile,
//degilse önceki iki elemanin FARKININ ALINMASI ile bulunur.

int rf_hesapla(int,int,float);

int main(void) {	
	srand(time(NULL));	
	int dizi[12],i,j;
	dizi[0]=1,dizi[1]=1;	
	float rasgele_sayi;	
	for(i=0;i<12;i++){
		rasgele_sayi=(float)rand()/RAND_MAX;
		dizi[i+2]=rf_hesapla(dizi[i],dizi[i+1],rasgele_sayi);}
	printf("Olusan dizi:\n");
	for(j=0;j<12;j++){
		printf("%d ",dizi[j]);}	
	return 0;}

int rf_hesapla(int fn_1, int fn_2, float rasgele_sayi){
	if(rasgele_sayi<0.5)
		return(fn_1+fn_2);
	else
		return(fn_1-fn_2);	}
























































