#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	/*
	Verilen bir say� dizisinde kullan�c� taraf�ndan girilen say�n�n olup olmad���n� kontrol eden, varsa ka��nc�
   indisinde oldu�unu bulan C kodu
	*/
	
	int dizi[10]={0,1,2,3,4,5,6,7,8,9};
	int sayi,i;
	printf("dizi icinde aramak istedi�iniz sayi--> ");
	scanf("%d",&sayi);
	int durum=1;
	for(i=0;i<10;i++){
		if(sayi == dizi[i]){
			printf("%d . indis teki sayi %d sayimiza esit",i,dizi[i]);
			durum=0;
		}
	}
	if(durum==1){
		printf("sayi dizi icerisinde bulunamadi");
	}
	
	return 0;
}
