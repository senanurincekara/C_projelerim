#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	

	// 10 elemanlý bir dizide en büyük eleman 
	
	int dizi[10] ={5,4,6,7,28,25,8,3,9,1};
	int max =dizi[0];
	int i;
	
	for(i=0;i<10;i++){
		if(dizi[i]>max){
			max=dizi[i];
	}
	}
	printf("en buyuk eleman--> %d",max);
	

	
	return 0;
}
