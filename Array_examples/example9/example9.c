#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	// 2 boyutlu diziyi tek boyutlu diziye çeviren ve bu dizinin  elemanlarýnýn frekanslarýný bularak ekrana gösteren c kodu
	
	int matrix[4][4]={{1,2,5,1},{2,5,2,3},{5,3,2,5},{3,1,9,2}};
	int matrix2[16];
	int tekrar[16];
	int i,j,k;
	int a=0;	  
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			matrix2[a]=matrix[i][j];
			tekrar[a]=-1;
			a++;
			
		}
	}
	
	for(i=0;i<16;i++){
		int toplam=1;
		for(k=i+1;k<16;k++){
			
			if(matrix2[i]==matrix2[k]){
				toplam=toplam+1;
				tekrar[k]=0;	
			}
		}
	
		if(tekrar[i]!=0){
			tekrar[i]=toplam;
		}
	}
	
	for(i=0;i<16;i++){
		if(tekrar[i]!=0){
			printf("element %d --> %d frekans\n",matrix2[i],tekrar[i]);
		}
	}
	
	
	return 0;
}
