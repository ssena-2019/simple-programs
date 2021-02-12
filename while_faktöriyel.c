/*
 *sena merdin
 * while ile faktöriyel hesaplama
 * deneme program 
 */


#include <stdio.h>

	int main()
{
	int girilen_sayi,sayi,carpim=1;
	 
	printf("Lutfen bir sayi giriniz:"); scanf("%d",&girilen_sayi);
	sayi=girilen_sayi;
	
	while(sayi>0){
		
		carpim*=sayi;
		sayi--;
		}
		
	printf("1 den %d ye kadar sayilarin carpiminin sonucu:%d",girilen_sayi,carpim);	
	return 0;
}

