#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	//10 elemanlý bir diziyi küçükten büyüðe doðru sýralayýp gösteren C kodu
	
	int dizi[10]={9,7,8,5,4,6,2,1,3,0};
	int dizi2[10];
	int i,j,temp;
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(dizi[i]>dizi[j]){
				temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;		
			}
		}
	}
	
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
		
	}
	
	return 0;
}
