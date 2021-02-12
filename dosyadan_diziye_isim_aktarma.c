/*sena merdin
 * deneme program 
 * STRUCT
 */

#include <stdio.h>
#include <string.h>
 struct Hasta{

	char tc[10], isim[40];

} hastalar[300];

  int c=0;
  
 int hastalari_oku(FILE *f){  
	
	if(f == NULL){
	   return -1;
	}
	
	char l[150];  //temp hafıza
	
	while(fgets(l, 150, f)!= NULL && c < 100){
		char *tc =	strtok(l, "\t");
		char *isim = strtok(NULL, "\t");
		//char *soyad = strtok(NULL, " " );
		
		if(tc!= NULL && isim!= NULL ){
			strncpy(hastalar[c].tc, tc, 10);
			strncpy(hastalar[c].isim, isim, 40);
			//strcpy(hastalar[c].soyad, soyad, 40);
			c++;
		}	
	}
	 return c;
}  
  
  void hastalari_yazdir(){
	  
	for(int i=0; i<c; i++){
		printf("%.10s\t%.40s\n", hastalar[i].tc, hastalar[i].isim);
	}  
}
  
  
  int main(){
	
	FILE *f= fopen("C:\\Users\\ali\\Desktop\\deneme programlar.txt", "r");
	hastalari_oku(f);
	hastalari_yazdir();
	fclose(f);
	
	return 0;
}

