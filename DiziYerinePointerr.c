#include <stdio.h>

float topla(float *,int);

int main(void) {
	
	float a[]={4.3,2.0,3.0,4.0};
	int boyut;
	boyut=4;
	float *aptr=&a[0];	
	printf("%f",topla(aptr,boyut));
	return 0;}
	
float topla(float *aptr,int boyut)
{
	int i;
	float toplam=0.0;
	for(i=0;i<boyut;aptr++,i++)
		toplam+=*aptr;
	return toplam;
}

