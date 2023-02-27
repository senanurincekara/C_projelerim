#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
		// verilen matrisi sýralayan ve ekrana yazdýran kod
	
	int matris[3][4]={{1,9,0,5},{38,2,11,0},{17,8,3,7}};	
		//	çýktý
		//	0 0 1 2
		//	3 5 7 8
		//	9 11 17 38

	int i,j;
	int uzunluk = sizeof(matris)/sizeof(int);
	int matris2[uzunluk];

	int k=0;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			
			matris2[k]=matris[i][j];
			k++;
			
			}			
		}
	
	int min=matris2[0],temp;
	for(i=0;i<12;i++){
		for(j=i+1;j<12;j++){
			if(matris2[i]>matris2[j]){
				
				temp=matris2[i];
				matris2[i]=matris2[j];
				matris2[j]=temp;
			}		
		}			
	}
	
	k=0;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
		
			matris[i][j]=matris2[k];
			k++;
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
