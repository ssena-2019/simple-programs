/*FİBONACCİ SAYI 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int s1=1;
	int s2=1;
	int s3;
	int s=2;
	int n;
	
	printf("n:");	scanf("%d", &n);
	
	while(s<n)
	{
		s3= s1+s2;
		printf("%d\n", s3);
		s1=s2;
		s2=s3;
		s++;
	
	}
	
	
	return 0;
}

