#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sayi1,sayi2,sonuc,giris=1;
	char islem;
	int kalan;
	
	
	
	printf("******HESAP MAKINESI******\n");
	printf("Kullanabileceginiz islemler:(+ , - , * , / , mod , karakok , us alma , logaritma)\n");
	printf("mod icin : %%\n");
	printf("karakok icin :$\n");
	printf("us alma icin : ^\n");
	printf("logaritma icin : ?\n");
	printf("komutuna tiklayiniz\n\n\n");
	printf("NOT::: logaritma icin girdiginiz ilk sayi tabani ikinci sayi ise ussu verir\n");
	printf("NOT::: karakokte girdigin ikinci sayi kokun degerini verir\n\n");
	
	
	
	
	while(giris!=0)
	{
		printf("devam etmek icin 1 e cikis yapmak icin 0 a basiniz\n");
	scanf("%d",&giris);
	printf("Bir sayi giriniz: ");
	scanf("%f",&sayi1);
	
	printf("bir islem giriniz: ");
	scanf(" %c",&islem);
	
	printf("Bir sayi giriniz: ");
	scanf("%f",&sayi2);
	
	
	
	
	if(islem=='+')
	{
		printf("%f\n",sayi1+sayi2);
	}
	 else if(islem=='-')
	{
		printf("%f\n",sayi1-sayi2);
	}
	else if(islem=='*')
	{
		printf("%f\n",sayi1*sayi2);
	
	}
	else if(islem=='/')
	{
		printf("%f\n",sayi1/sayi2);
		if(sayi2==0)
		{
			printf("sonuc tanimsizdir\n\n");
		}
		
	}

	else if(islem=='%')
	{
		kalan = (int)sayi1 %(int) sayi2;
		printf("%d\n",kalan);
	}
	
	else if(islem=='$') 
	{
		sonuc=pow(sayi1,1/sayi2);
		printf("%f\n",sonuc);
		if(sayi1<0)
		{
			printf("sonuc tanimsizdir\n\n");
		}
		
		
	}
	
	else if(islem=='^')
	{
		
		printf("%f\n",pow(sayi1,sayi2));
	}
	
	else if(islem=='?')
	{
		
		printf("%f\n",log(sayi2)/log(sayi1));
		
		if(sayi1<0 || sayi1==1)
		{
			printf("sonuc tanimsiz\n\n");
		}
		else if(sayi2<0)
		{
			printf("sonuc tanimsizdir\n\n");
		}
	}
	
	else
	{
		printf("Yanlis islem komutu sectiniz\n");
	}
	printf("devam etmek icin 1 e cikis yapmak icin 0 a basiniz\n");
	scanf("%d",&giris);
   }
   
   
	  

	
	return 0;
}
