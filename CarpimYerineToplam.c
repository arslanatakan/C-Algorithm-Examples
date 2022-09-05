#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int carpan1,carpan2,carpan1tutucu;
	printf("Carpilacak sayilari sirasiyla giriniz : ");
	scanf("%d%d",&carpan1,&carpan2);
	
	carpan1tutucu = carpan1;
	for(;carpan2>1;carpan2--){
		carpan1 = carpan1 + carpan1tutucu;
		printf(" %d +",carpan1tutucu);
	}
	
	printf(" %d = %d",carpan1tutucu,carpan1);
	
	return 0;}
