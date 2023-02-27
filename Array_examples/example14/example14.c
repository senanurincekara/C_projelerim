#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	/*	
	Verilen 4x5 boyutundaki matrisi, önceden tanýmlanmýþ
	4x5 boyutunda ve içerisi boþ olan ikinci bir matrise
	aþaðýdaki kurala göre aktaran C kodunu yazýnýz.
	
	– Kural: Satýrdaki elemanlar deðiþtirilmeden, matrisin
	satýrlarý toplamý küçükten büyüðe doðru sýralý olacak
	þekilde aktarýlacaktýr. 
	*/	


	int i,j,temp,toplam=0;
	int matris1[4][5]={
	{8,5,2,4,3}, //1. indix olmalý  // toplamý 22
	{9,6,4,0,4}, //2. indix olmalý  //toplamý 23
	{0,1,2,3,4}, //0. indix olmalý  // 10
	{9,9,9,9,9}}; //3. indix olmalý //45
	
	int matris2[4][5];
	int topla[4];
	int index[4];
	
	printf("\nMATRIS 1 BASLANGIC\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d -- ",matris1[i][j]);
		}
		
		printf("\n");
		
	}
	printf("\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			toplam=toplam+matris1[i][j];
		}
		topla[i]=toplam;
		toplam=0;		
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(topla[i]<topla[j]){
				temp=topla[i];
				topla[i]=topla[j];
				topla[j]=temp;
			}
		}
	}
	
	int matris_ici,durum;
	int a=0;
	int k,ata;
	
	for(i=0;i<4;i++){
	
		toplam=0;
		for(j=0;j<5;j++){
			toplam=toplam+matris1[i][j];
	
		}
	
		for(k=0;k<4;k++){
			matris_ici=topla[k];
			if(toplam == matris_ici){
				for(j=0;j<5;j++){
					ata=matris1[i][j];
					matris2[k][j]=ata;
				}
			}			
		}	
	}
	
	printf("\n\nCOZUM MATRIS 2\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d -- ",matris2[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
