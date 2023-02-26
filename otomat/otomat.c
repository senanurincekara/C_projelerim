#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char kola,soda,fantaa;
	int boyut,adet=0,i,yas,bedava=0;
	float ucret_kola,ucret_fanta,ucret_soda,indirimsiz_fiyat,total;
	
	printf("-----------------------------------------------------------\n");
	printf("\tOTOMAT MENU \n\n");
	printf("\tKola 9.5 TL\n\tFanta 9.5 TL\n\tSade soda 4 TL\n\n");
	printf("\t~~KAMPANYA~~\n\t3 kola/3 Fanta /3 Sade soda alana +1 adet bedava (3+1,6+2,9+3)\n\t18 yas altina %%35 indirim\n\n"); // 3k da +1 hediye veriyor
	printf("-----------------------------------------------------------\n\n");

	printf("Kola almak ister misiniz?(EVET-E HAYIR-H)-->");
	scanf("%c",&kola);
	
	if(kola == 'E' || kola=='e'){
		printf("Kac adet almak istersiniz ?-->");
		scanf("%d",&boyut);
		for(i=1;i<boyut+1;i++){
			if(i%3==0){
				ucret_kola=ucret_kola+9.5;
				adet=adet+1;
				bedava=bedava+1;
			}else{
				ucret_kola=ucret_kola + 9.5;
				
			}
			adet=adet+1;
			
		}
		
		printf("%d adet kola aldin %d adeti kampanya urun odedigin fiyat --> %0.2f\n",adet,bedava,ucret_kola);
	}else{
		printf(" ");
	}
	
	adet=0;
	boyut=0;
	bedava=0;
	
	printf("\nFanta almak ister misiniz?(EVET-E HAYIR-H)-->");
	scanf("%s",&fantaa);
	
	if(fantaa=='E'||fantaa=='e'){
		printf("Kac adet almak istersiniz ?-->");
		scanf("%d",&boyut);
		for(i=1;i<boyut+1;i++){
			if(i%3==0){
				adet=adet+1;
				ucret_fanta=ucret_fanta+9.5;
				bedava=bedava+1;
			}else{
				
				ucret_fanta=ucret_fanta+9.5;
			}
			adet=adet+1;
		}
		printf("%d adet kola aldin %d adeti kampanya urun odedigin fiyat --> %0.2f\n",adet,bedava,ucret_fanta);

	}
	
	adet=0;
	boyut=0;
	bedava=0;

	printf("\nSade soda almak ister misiniz? (EVET-E HAYIR-H)-->");
	scanf("%s",&soda);	
	
	if(soda=='E'||soda=='e'){
		printf("Kac adet almak istersiniz ?-->");
		scanf("%d",&boyut);
		for(i=1;i<boyut+1;i++){
			if(i%3==0){
				adet=adet+1;
				ucret_soda=ucret_soda+4;
				bedava=bedava+1;
			}else{
				ucret_soda=ucret_soda+4;
			}
			adet=adet+1;

		}
		printf("%d adet kola aldin %d adeti kampanya urun odedigin fiyat --> %0.2f\n",adet,bedava,ucret_soda);
	}
	indirimsiz_fiyat=ucret_fanta + ucret_kola + ucret_soda;

	printf("\nYasiniz nedir ? --> ");
	scanf("%d",&yas);
	
	if (yas<18){ // 18 yaþ altýna %35 indirim
        total =indirimsiz_fiyat-(indirimsiz_fiyat*0.35);
        printf("yasiniz %d oldugu icin  %%35 lik bir indirim uygulandi\nindirimsiz fiyat --> %0.2f\nindirimli fiyat-->%0.2f",yas,indirimsiz_fiyat,total);
	}else{
		total=indirimsiz_fiyat;
		printf("yasiniz %d oldugu icin bir indirim uygulanmadi\nOdenecek tutar-->%0.2f",yas,total);

	}
			
	return 0;
}
