/*safiye sena merdin
 * bir sayının asal sayı olup olmadığını bulan recursive c programı
 * lab6.1.c
 */


#include <stdio.h>

int asalsayi(int n,int i){  //iki parametre alıyoruz 1. parametre sayının yerini tutar.2.parametre sınırı belirler.
	
	if(n<2)   //eğer n 2 den küçükse asal değildir.
	 return 0;
	else if(i==1) 
	 return 1;
	else if(n%i==0) //eğer sayıyı mod i de 0'a eşitse asal sayı değildir.
	 return 0;
	else
	 return asalsayi(n,i-1);

}

int main()
{
	int sayimiz;
		printf("lutfen bir sayi giriniz:");  scanf("%d",&sayimiz);
	
	int sonuc=asalsayi(sayimiz,sayimiz/2);
		if(sonuc==0)
			printf("%d asal degildir.",sayimiz);
		else
			printf("%d asaldir.",sayimiz);
	
	return 0;
}
