#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int yil_1,ay_1,gun_1,gun_2,ay_2,yil_2;
	printf("Bugun icin -> yil - ay - gun degerlerini, giriniz -> ");
	scanf("%d%d%d",&yil_1,&ay_1,&gun_1);
	printf("Dogum gununuzu -> yil - ay - gun biciminde, giriniz -> ");
	scanf("%d%d%d",&yil_2,&ay_2,&gun_2);
	
	if(gun_1<gun_2)
	{
		gun_1+=30;
		ay_1-=1;
	}
	if(ay_1<ay_2)
	{
		ay_1+=12;
		yil_1-=1;
	}
	printf("%d yil %d ay %d gundur yasiyorsunuz.",yil_1-yil_2,ay_1-ay_2,gun_1-gun_2);
	
	
	
	
	
	
	return 0;}
