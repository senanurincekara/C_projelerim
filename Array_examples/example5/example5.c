#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//Bir matrisin köþegenlerindeki sayýlarýn toplamýný bulan bir C programý 
	
	// 1 + 5 + 3 = 9 ve 0 + 5 + 2 = 7
	
	int dizi[3][3]={
	{1,9,0},
	{0,5,2},
	{2,1,3}};
	
	int i,j,toplam=0,toplam2=0;
	
	for(i=0;i<3;i++){
		toplam=toplam + dizi[i][i];
	}
	j=2;
	
	for(i=0;i<3;i++){
		toplam2=toplam2+dizi[i][j];
		j--;
	}
	printf("1. kosegendeki sayilarin toplami --> %d\n",toplam);
	printf("2. kosegendeki sayilarin toplami --> %d",toplam2);

	
	
	return 0;
}
