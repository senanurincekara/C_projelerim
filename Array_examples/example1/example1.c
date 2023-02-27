#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	  // verilen iki dizinin elemanlarýný toplama 
     
    int a[2][3] = {{1,2,3},{4,5,6}};
	int b[2][3] = {{1,2,3},{4,5,6}};
	int m[2][3];
	int i,j,toplam=0;
	for(i=0;i<2;i++){
		for (j=0;j<3;j++){
			m[i][j]= a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for (j=0;j<3;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
