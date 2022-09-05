#include <stdio.h>

//void diziFonksiyonu(int [],int *,float *,int);

int main(void){
	
	int i,bolenSayi,sinir,asalSorgu;
	printf("Kaca kadar olan asal sayilari tespit edelim? => "); scanf("%d",&sinir);
	
	for(i=2;i<=sinir;i++)
	{
		asalSorgu=1;//Her bir sayi icin asalSorgu'muz basta TRUE kabul edilmelidir.
		for(bolenSayi=2;bolenSayi<i;bolenSayi++)
		{
			if(i%bolenSayi==0)
			{
				asalSorgu=0;//Eger sayi kendine kadar olan sayilardan herhangi birine tam bolunurse asalSorgu = 0 (FALSE) a donmelidir.
				break;
			}
		}
		if(asalSorgu)
			printf("\n%3d asaldir.",i);
	}
	
/*	
	int dizi[]={5,-2,0,8,8,3,-10,-30,200,-100};
	float ortalama;	
	int boyut=10,toplam=0;
	diziFonksiyonu(dizi,&toplam,&ortalama,boyut);
	printf("toplam: %d\nort: %.2f",toplam,ortalama);
*/	
	
return 0;}

/*
void diziFonksiyonu(int dizi[],int *toplam,float *ortalama,int boyut){
	int i;
	for(i=0;i<boyut;i++)
	{
		*(toplam)+=dizi[i];
	}
	*ortalama=(float)*(toplam)/boyut;
}

*/









