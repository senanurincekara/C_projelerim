#include <stdio.h>
#include <stdlib.h>

/*
	öðrenci sayýsý alýnýyor 
	öðrencinin kaç dersi olduðu bilgisi alýnýyor
	ders isimleri kod þeklinde isteniyor
	vize ve final notlarý kullanýcýdan isteniyor
	ortalama esaplanýyor 
	
	en son çýktý kýsmýnda durum 1 ise geçti 0 ise kaldý 
	
*/

typedef struct Ders{
	int Dkod;
	int vize;
	int finaln;
	double ort;
	int durum;
	
}D;


typedef struct Ogrenci{
	int OgrenciNo;
	char ad[20];
	int Dsayisi;
	D *dersler;
}Ogr;

Ogr *bilgi_al(int OgrSayisi){
	Ogr *ogrenciler;
	ogrenciler=(Ogr*)malloc(OgrSayisi*sizeof(Ogr));
	int i,j;
	for(i=0;i<OgrSayisi;i++){
		printf("%d. ogrencinin adi--> ",i+1);
		scanf("%s",&(ogrenciler+i)->ad);
		printf("%d. ogrencinin no-->",i+1);
		scanf("%d",&(ogrenciler+i)->OgrenciNo);
		printf("%d. ogrencinin ders sayisi-> ",i+1);
		scanf("%d",&(ogrenciler+i)->Dsayisi);
		
		(ogrenciler+i)->dersler=(D*)malloc(sizeof(D) * (ogrenciler+i)->Dsayisi);
		
		for(j=0;j<(ogrenciler+i)->Dsayisi;j++){
			printf("%d. ogrencinin %d. ders kodu -->",i+1,j+1);
			scanf("%d",&(((ogrenciler+i)->dersler)+j)->Dkod);
			
			printf("%d. ogrencinin %d. vize notu --> ",i+1,j+1);
			scanf("%d",&(((ogrenciler+i)->dersler)+j)->vize);
			
			printf("%d. ogrencinin %d. final notu --> ",i+1,j+1);
			scanf("%d",&(((ogrenciler+i)->dersler)+j)->finaln);
			
			(((ogrenciler+i)->dersler)+j)->ort =(((ogrenciler+i)->dersler)+j)->vize * 0.4 +(((ogrenciler+i)->dersler)+j)->finaln *0.6;
			
		}
		
		
	}
	
	return ogrenciler;
}

void ort_hesapla(Ogr *ogrenciler,int OgrSayisi){
	int i,j;
	
	for(i=0;i<OgrSayisi;i++){
		for(j=0;j<(ogrenciler+i)->Dsayisi;j++){
			if((((ogrenciler+i)->dersler)+j)->ort >= 60) 
				(((ogrenciler+i)->dersler)+j)->durum =1;
			
			else
				(((ogrenciler+i)->dersler)+j)->durum =0;
				
			
			printf("ogrenci no %d Ders kodu %d ",(ogrenciler+i)->OgrenciNo,(((ogrenciler+i)->dersler)+j)->Dkod);
			printf("ORT --> %lf , Durum --> %d\n",(((ogrenciler+i)->dersler)+j)->ort,(((ogrenciler+i)->dersler)+j)->durum);
			
		}
	}
	
}

void ders_gecen_ogr_sayisi(Ogr *Ogrenciler,int derskodu,int Ogrsayisi){
	int i,j;
	int gecenogrsayisi=0;
	int dersialanogrsayisi=0;
	
	for(i=0;i<Ogrsayisi;i++){
		for(j=0;j<(Ogrenciler+i)->Dsayisi;j++){
			if((((Ogrenciler+i)->dersler)+j)->Dkod== derskodu){
				dersialanogrsayisi++;
				if((((Ogrenciler+i)->dersler)+j)->durum== 1){
					gecenogrsayisi++;
				}
			}
		}
	}
	printf("ders kodu %d dersi alam ogr sayisi %d dersi gecen ogr sayisi %d",derskodu,dersialanogrsayisi,gecenogrsayisi);
	
}


int main(int argc, char *argv[]) {
	
	int ogrsayisi,derskodu;
	printf("ogr sayisi -->");
	scanf("%d",&ogrsayisi);
	
	Ogr *ogrenciler =bilgi_al(ogrsayisi);
	ort_hesapla(ogrenciler,ogrsayisi);
	printf("ders kodu giriniz-->");
	scanf("%d",&derskodu);
	ders_gecen_ogr_sayisi(ogrenciler,derskodu,ogrsayisi);
	
	
	return 0;
}
