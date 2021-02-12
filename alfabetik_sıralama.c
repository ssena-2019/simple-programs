#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char Kelimeler[n][100], t[100];
    int x, y;
    int n;
    
    printf("Lutfen Kelime Sayisini Belirtiniz:\n");
    scanf("%d", &n);
    
    printf("\nLutfen Kelimeleri Giriniz:\n");
    for (x=0;x<n;x++)
        scanf("%s", Kelimeler[x]);

    printf("\nMetindeki Kelimeler:");
    for (x=0; x<n; x++)
    {
        printf ("\n%s", Kelimeler[x]);
    }
    for (x = 1; x < n; x++){
        for (y = 1; y < n; y++){
            if (strcmp(Kelimeler[y-1], Kelimeler[y])>0)
            {
                strcpy(t, Kelimeler[y-1]);
                strcpy(Kelimeler[y-1], Kelimeler[y]);
                strcpy(Kelimeler[y], t);
            }
        }
    }
    printf("\n---------------------------------------------------\n");
    printf("\nMetindeki Kelimeleriniz Alfabetik Olarak Siralandi: ");
    for (x = 0; x < n; x++)
        printf("\n%s", Kelimeler[x]);
    return 0;
}
