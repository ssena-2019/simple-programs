/*bu program; binary-search recursive olarak yazar.
 */


#include <stdio.h>

int ikili_arama(int hedef,int a[],int bas,int son){
		
		if(bas>son)
		 return -1;
	int orta=(bas+son)/2;
		if(hedef==a[orta])
		 return 0;
		else if(hedef<a[orta])
		 return ikili_arama(hedef,a,bas,orta-1); 
		else if(hedef>a[orta])
		 return ikili_arama(hedef,a,orta+1,son); 
		else
		 return -1; 
}
	int main()
{
	int b[]={2,3,19,26,40,63};
	int l=sizeof(b)/sizeof(int);
	int sayi;
		printf("lutfen pozitif bir sayi giriniz:");  scanf("%d",&sayi);
	int sonuc=ikili_arama(sayi,b,0,l-1);
	
	(sonuc==-1)? printf("sayiniz bu dizide bulunamadi!!!"):printf("sayiniz bulundu ve sayiniz:%d",sayi);
	
	return 0;
}

