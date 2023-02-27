#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	//Verilen matristeki sayýlarýn ortalamasýna en yakýn satýr ortalamasýný bulan C kodun

	int dizi[3][2]={ // satir ort --> 3
	{1,9}, //5
	{0,5}, //2.5 ***print
	{2,1}}; //1.5
	float ortalama[4];
	
	int k,i,j,toplam=0,satir_toplam=0;
	float ort,satir_ort,max;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			toplam = toplam +(dizi[i][j]);
			satir_toplam=satir_toplam+(dizi[i][j]);
		}
		satir_ort= (float)satir_toplam/2;
		ortalama[i]=satir_ort;
		satir_ort=0;
		satir_toplam=0;
	}
	ort =toplam/6;
	ortalama[3]=ort;

	
	float temp;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(ortalama[i]<ortalama[j]){
				
				temp =ortalama[j];
				ortalama[j]=ortalama[i];
				ortalama[i]=temp;
			}
		}
		
	}
	
	float ust_kontrol,alt_kontrol;
	
	for(i=0;i<4;i++){
		if (ortalama[i]==ort){
			
			ust_kontrol= ortalama[i+1];
			alt_kontrol =ortalama[i-1];
			
			if(ortalama[i]-alt_kontrol > ust_kontrol - ortalama[i]){
				max=ortalama[i+1];
			}else{
				max=ortalama[i-1];
			}
			
			if(i==0){
				max=ortalama[i+1];
			}
		}
	}

	
	printf("Arrayin ortalamasi---> %.2f\n",ort);
	printf("en yakin satir ortalamsi --> %.2f",max);
	
	
	
	return 0;
}
