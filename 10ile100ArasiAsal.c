#include <stdio.h>
#include <stdlib.h>


int main(void) {
	//10-100 arasý asal bulma
	int sayi=10;
	for(sayi;sayi<=100;sayi++)
	{
		if(sayi%2==0)
			continue;
		else if(sayi%3==0)
			continue;
		else if(sayi%5==0)
			continue;
		else if(sayi%7==0)
			continue;
		else
			printf(" %d asal\n",sayi);
	}
	
	
	
	
	
	
	return 0;}
