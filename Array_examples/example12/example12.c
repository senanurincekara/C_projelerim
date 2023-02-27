#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
		//iki matrisin elmanlarýný yer deðiþtirme 
	
	int matris1[2][2]={{1,2},{4,5}};
	int matris2[2][2]={{7,8},{9,10}};
	int temp,i,j;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			temp=matris1[i][j];
			matris1[i][j]=matris2[i][j];
			matris2[i][j]=temp;
		}
	}
	
	printf("MATRIS 1:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",matris1[i][j]);
		}
		printf("\n");
	}

	printf("\nMATRIS2:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",matris2[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
