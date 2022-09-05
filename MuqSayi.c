#include <stdio.h>
#include <stdlib.h>
//1 ile 9999 arasýndaki mukemmel sayilari bulduran program.
int main(void) {
	int i,j,toplam;
	for(i=1;i<=9999;i++){
		toplam=0;
		for(j=1;j<=i/2;j++)
			if(i%j==0)
				toplam+=j;
		if(toplam==i)
			printf("%4d mukemmel sayidir.\n\n",i);}
	
	
	return 0;}
