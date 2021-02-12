/*
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	
	printf("Lutfen ucgenin 1.kenarını giriniz:\n");   scanf("%d", &a);
	printf("Lutfen ucgenin 2.kenarını giriniz:\n");   scanf("%d", &b);
	printf("Lutfen ucgenin 3.kenarını giriniz:\n");   scanf("%d", &c);
	
	 if(a+b>c && b+c>a && a+c>b && a-b<c && b-c<a && a-c<b)
	 
	 printf("Girdiginiz degerlerle ucgen olusur.");
	 
	 else
	 
	 printf("Girdiginiz degerlerle ucgen olusmaz!!!");
	
	
	
	
	return 0;
}

