#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//satýr ve sutunlarý gösterme 
	
	int matrix[5][4]={
	{1,2,5,1},
	{2,5,2,3},
	{5,3,2,5},
	{3,1,9,2},
	{4,7,8,9}};
	int i,j;
	printf("Satirlar\n\n");
	for(i=0;i<5;i++){
		printf("satir %d--> ",i+1);
		for(j=0;j<4;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n---------\n");
	printf("Sutunlar\n");
	
	for(i=0;i<4;i++){
		printf("sutun %d --> ",i+1);
		for(j=0;j<5;j++){
			printf("%d ",matrix[j][i]);
		}
		printf("\n");
	}

	
	
	return 0;
}
