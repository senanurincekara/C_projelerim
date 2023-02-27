#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// a ve b matrisi verilmiþtir . b matrisi a matrisinin içierisinde kaç defa geciyor ve hangi indexler arasýnda bulunuyor 
	
	int a[]={1,5,4,6,1,5,4,1,4,5,1,5,4,8,2,1,5,4};
	int b[]={1,5,4};
	
	// çýktý --> 0-2 , 4-6 , 10-12 ,15-17;
	
	int uzunluk=sizeof(a)/sizeof(int);
	int uzunluk_gecen =sizeof(b)/sizeof(int);

	int i,j,k,l,sayac,index_baslangic,index_bitis,toplam_kac=0;

	for(i=0;i<uzunluk;i++){
		int bul=1;
		sayac=0;
		
		if(a[i]==b[0]){
			sayac++;
			for(j=i+1;j<=i+2;j++){
				if(a[j]==b[bul]){
					sayac++;
					bul++;
				}if(sayac==uzunluk_gecen){
					index_baslangic=i;
					index_bitis=j;
					toplam_kac++;
					printf("indexler--> %d - %d \n",index_baslangic,index_bitis);
				}
			
			}
		    
     }
     
  }	
  printf("\n toplam %d defa b matrisi a matrisinin icinde gecti",toplam_kac);
  
	
	return 0;
}
