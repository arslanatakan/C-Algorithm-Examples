#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char kelime[100];
	puts("Lutfen terse cevrilecek kelimeyi giriniz.");
	gets(kelime);
	int i=0;
	while(kelime[i]!='\0')
		i++;
	for(;i>=0;i--)
		printf("%c",kelime[i-1]);//kelime[i] yazarsan da en ba�ta null karakteri bas�p sonra kelimeyi tersten yazar.
	
	
	/*
	int d[10];
	int sayi,i;
	printf("10 luk tabandaki sayinizi giriniz -> ");
	scanf("%d",&sayi);
	for(i=0;i<10;i++)
	{
	
		d[i]=sayi%2;
		sayi=sayi/2;
		if(sayi<2)
		{
			i++;
			d[i]=sayi;
			break;
		}
		
	}
	for(;i>=0;i--)
		printf("%d",d[i]);
	*/
	
	//207
	
	/*
	int d[10],i,j,indexTutucu;
	int enKucuk;
	for(i=0;i<10;i++)
	{
		printf("%d.index=",i);
		scanf("%d",&d[i]);
	}
	enKucuk=d[0];
	for(j=1;j<10;j++)
	{
		if(enKucuk>d[j])
		{
			enKucuk=d[j];
			indexTutucu=j;
		}
	}
	for(i=0;i<10;i++)
		printf("%d ",d[i]);
	
	printf("%d. index'teki eleman enKucuk elemandir.\nElemanin degeri ->    %d",indexTutucu,enKucuk);
	*/
	
	/*
	int n,j,i;
	printf("Kac elemanli bir dizi olusturmak istiyorsun ? ");
	scanf("%d",&n);
	int d[n];
	
	int elemanSayisiTutucu = n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&d[i]);//dizinin ba� k�sm�na eleman ekleyen k�s�m.
		if((n-1)!=i)
			scanf("%d",&d[n-1]);//dizinin sondan ortalar�na do�ru gelene kadarki k�sm�na eleman ekleyen k�s�m.
		n--;//her iterasyonda bir azaltmal�y�z ki sondan ba�a do�ru imlecimiz gelsin(eleman ekleyen imlec).
	}
	for(j=0;j<elemanSayisiTutucu;j++)//dizinin yazd�r�lmas�.
		printf("%d ",d[j]);
	*/
	
	
	
	return 0;}
