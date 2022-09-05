#include <stdio.h>
#include <string.h>

int lokasyon(char [],char);

int main(void){
    char esas[36]="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char tek_[36]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char cift[36]="9Z8Y7X6W5V4U3T2S1R0QPONMLKJIHGFEDCBA";
    
    char veri__[]="ERCIYES UNV 1978 YILINDA KURULDU";
    
    char kodlu_[36],kodsuz[36];
    
    printf("\n\nEsas   metin : %s\n\n",veri__);
    
    int  ks=strlen(veri__),i;
    
    for(i=0;i<ks;i++){
      if (veri__[i]==' ') kodlu_[i]=' '; else
          kodlu_[i]=(i%2==0)?cift[lokasyon(esas,veri__[i])]:tek_[lokasyon(esas,veri__[i])];}
    
    kodlu_[i]='\0';printf("Kodlu  metin : %s\n\n",kodlu_);
    
    for(i=0;i<ks;i++){
      if (kodlu_[i]==' ') kodsuz[i]=' '; else 
          kodsuz[i]=(i%2==0)?esas[lokasyon(cift,kodlu_[i])]:esas[lokasyon(tek_,kodlu_[i])];}
    
    kodsuz[i]='\0';printf("Kodsuz metin : %s\n\n",kodsuz);
    
    return 0;}

int lokasyon(char veri__[36],char c){
    int i;
    for(i=0;i<36;i++) if (!(veri__[i]-c)) break;
    return i;}
