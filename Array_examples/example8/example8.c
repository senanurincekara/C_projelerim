#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	/*	
	Verilen 4x5 boyutundaki matrisi, �nceden tan�mlanm��
	4x5 boyutunda ve i�erisi bo� olan ikinci bir matrise
	a�a��daki kurala g�re aktaran C kodunu yaz�n�z.
	
	� Kural: Sat�rdaki elemanlar de�i�tirilmeden, matrisin
	sat�rlar� i�erisinde b�y�kten k����e do�ru s�ralayan c kodu 
	*/	
	
	
	int dizi[4][5]={{7,9,20,3,5},{4,7,1,9,10},{5,-14,7,8,10},{5,1,2,7,9}};
    int s=0;
	int i,j,k,temp;
	int dizi2[4][5];
    

    for(i=0;i<4;i++)
    {

        for(j=0;j<5;j++)
        {
            for(k=0;k<5;k++)
            {
                if(dizi[i][j]>dizi[i][k])
                {
                    temp=dizi[i][j];
                    dizi[i][j]=dizi[i][k];
                    dizi[i][k]=temp;
                }
               
            }
        }

        for(l=0;l<5;l++)
        {
            dizi2[i][l]=dizi[i][l];
        }
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",dizi2[i][j]);
        }
        printf("\n\n");
    }
	
	return 0;
}
