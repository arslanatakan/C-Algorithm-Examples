#include <stdio.h>
#include <string.h>

//Programlama-1 Final2021 Soru-2 çözüm:
int Karsilastirici(char[],char);

int main(void) {
	char esas[36]="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char tek_[36]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cift[36]="9Z8Y7X6W5V4U3T2S1R0QPONMLKJIHGFEDCBA";
	char veri_[]="ERCIYES UNV";
	char kodlu_[36];//kodlu veriyi tutmak için tanýmladýðýmýz dizimiz.
	int ks=strlen(veri_);
	int i;
	
	for(i=0;i<ks;i++){
		kodlu_[i]=(i%2==0)?cift[Karsilastirici(esas,veri_[i])]:tek_[Karsilastirici(esas,veri_[i])];		
	}
	
	kodlu_[i]='\0'; 		printf("Kodlu metin: \n%s",kodlu_);
	return 0;}

int Karsilastirici(char esas[],char arastirilacakKarakter){
	int j;
	for(j=0;j<36;j++){
		if(arastirilacakKarakter==esas[j])
			break;		
	}
	return j;
}
