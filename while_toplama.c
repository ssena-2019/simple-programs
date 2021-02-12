/*sena merdin
 * while döngüsü toplama işlemi
 * deneme program
 * 
 * 
 */


#include <stdio.h>

	int main()
{
	int sayi,i,toplam;
	i=0;
	toplam=0;
	
	printf("lutfen bir sayi giriniz:");  scanf("%d", &sayi);
	
	while(i<=sayi){
	    
	    toplam+=i;
		i++;
		
		}
		
	printf("0 dan %d a kadar sayilarin toplami:%d" ,sayi,toplam);	
		
	return 0;
}

