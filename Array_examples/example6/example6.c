#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	//Bir matristeki en büyük ve en küçük elemaný bulan C kodunu yazýnýz
	
	
	int dizi[3][3]={
	{1,9,10},
	{0,5,2},
	{2,1,3}};
	
	int max=dizi[0][0];
	int min=dizi[0][0];
	int a,b,c,d,i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(dizi[i][j]>max){
				max=dizi[i][j];
				a=i;
				b=j;
			}if(dizi[i][j]<min){
				min=dizi[i][j];
				c=i;
				d=i;
			}
		}
	}
	printf("max deðer --> %d , index --> %d. satir %d. sutun \n",max,a,b);
	printf("min deger --> %d , index --> %d. satir %d. sutun ",min,c,d);
	
	
	return 0;
}
