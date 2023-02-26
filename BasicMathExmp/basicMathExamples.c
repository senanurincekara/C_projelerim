#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi1=6; 
	mukemmelSayi(sayi1);
	//6 = 1+2+3 ( bolenleri )
	//28 = 1+2+4+7+14
	
	
	printf("\n\n");
	int sayi2=1124;
	spyNumber(sayi2);
	//1124 --> 1 + 1 + 2 + 4 =8
    //     --> 1 * 1 * 2 * 4 =8
	
	
	printf("\n\n");
	int sayi3=532;
	magicNumber(sayi3);
	// 532 --> 5 + 3 + 2 --> 10  ---> 1+ 0 = 1 ise
	
	
	printf("\n\n");
	int sayi4 = 145;
	strongNumber(sayi4);
	// 145 --> 1! + 4! + 5! = 145
	
	
	printf("\n\n");
	int sayi5 = 9;
	neonNumber(sayi5);
	// 9 --> 9 * 9 = 81  --> 8 + 1 = 9 ( sayimiz ise )
	
	
	printf("\n\n");
	int sayi6= 12; // 3*4
	pronicNumber(sayi6);
	
	printf("\n\n");
	int sayi7=371;
	armStrongNum(sayi7);
	
	printf("\n\n");
	int sayi8=121;
	polindromeNum(sayi8);
	// tersten ve düzden ayný 
	
	
	return 0;
}



int mukemmelSayi(int sayi){
	// MÜKEMMEL SAYI - PERFECT NUMBER
	
	int toplam=0;
	int i;
	for(i =1; i<sayi; i++){
		
		if (sayi % i == 0){
			toplam=toplam + i;
		}		
	}
	
	if (sayi == toplam){
		printf("sayi mukemmel bir sayidir ~~");
	}else{
		printf("sayi mükemmel deðil");
	}
	
}

int spyNumber(int sayi){
	
	int carpim=1;
	int toplam=0;
	int kalan =0;
	
	while(sayi>0){
		kalan = sayi %10;
		carpim=carpim*kalan;
		toplam =toplam+kalan;
		sayi =sayi/10;
			
	}
	if (carpim == toplam){
		printf("number is a spy number ~~");
	}else{
		printf("not spy number");
	}
	
}

int magicNumber(int sayi){
	int kalan=0;
	int toplam=0;
	while(sayi>0){
		kalan =sayi %10;
		toplam =toplam +kalan;
		sayi=sayi/10;
	}
	if (toplam == 10){
		printf("number is a magic number ~~");
	}else{
		printf("not a magic number");
	}
}


int strongNumber(int sayi){
	int kalan =0;
	int i ;
	int toplam = 0;
	int sayimiz =sayi;
	
	while(sayi>0){
		
		int carpim =1;
		kalan =sayi%10;
		
		for(i=1;i<kalan+1;i++){
			carpim = carpim * i;
			
		}
		toplam =toplam +carpim;
		
		sayi =sayi/10;
		
	}
	if (toplam ==sayimiz ){
		printf("strong number ~~");
	}else{
		printf("not a strong number");
	}
	
}

int neonNumber(int sayi){
	int sayi2 = sayi*sayi;
	int kalan , toplam =0;
	while(sayi2>0){
		kalan =sayi2 % 10;
		toplam =toplam + kalan ;
		sayi2 =sayi2 /10;
		
		
	}
	if(toplam == sayi){
		printf("number is a neon number ~~");
	}else{
		printf("not a neon number");
	}
	
}

int pronicNumber(int sayi){
	// ardýþýk iki sayýnýn toplamý girilen sayýya eþit ise
	
	int i;
	int evet =0;
	
	for(i=1;i<sayi+1;i++){
		if(i*(i+1)==sayi){
			evet=1;
			break;
		}
		
	}
	if (evet==1){
		printf("number is a Pronic Number ~~");
	}else{
		printf("not a pronic num");
	}
	 	
}

int armStrongNum(sayi){
	//371 = 3^3 + 7^3 + 1^3 (27 + 343 +1) 
    //8208 = 8^4 + 2^4 +0^4 + 8^4 (4096 + 16 + 0 + 4096).
	
	int i;
	int kalan;
	int sayac=0;
	int sayimiz=sayi;
	int sayimiz2=sayi;
	int basamak=0;
	while(sayi>0){
		kalan=sayi%10;	
		sayi=sayi/10;
		basamak++;
	}
	
	int carpim=1;
	int toplam=0;
	while(sayimiz>0){
		kalan=sayimiz%10;
		for(i=0;i<basamak;i++){
			carpim=kalan*carpim;
			
		}
		toplam=toplam+carpim;
		carpim=1;
		sayimiz=sayimiz/10;
		
	}
	if(sayimiz2==toplam){
		printf("%d sayisi armstrong~~ ",sayimiz2);
	}else{
		printf("%d sayisi armstrong degil ",sayimiz2);
	}
}


int polindromeNum(sayi){
	int i,j;
	int ters=0;
	int sayimiz= sayi;
	int kalan;
	while(sayi>0){
		kalan=sayi%10;
		ters=ters*10;
		ters=ters+kalan;
		sayi=sayi/10;
	}
	if(ters == sayimiz){
		printf("sayi polindrome~~");
	}else{
		printf("sayi polindrome degil");
	}
	
}


