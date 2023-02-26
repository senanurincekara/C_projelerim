
//AD SOYAD: SENANUR �NCEKARA
//NUMARA : 211 000 110 27


#include <stdio.h>
#include <stdlib.h>

typedef struct bilet  //bavulkg i�in b�r struct olu�turuldu
{

    int bavulkg;

} bavul;


struct Yolcu   //yolcu bilgilerinin tutuldu�u bir struct olu�turuldu
{
    char ad[50];
    char soyisim[50];
    char cinsiyet[15];

    int tc;
    int telno;
    int yas;

    int sonBilet;

    bavul* b;
};

struct Yolcu *yolcuptr;   //struct Yolcu i�in *yolcuptr isimli bir pointer olu�turuldu


void enyuksekbiletfiyati(struct Yolcu *ptr,int n)
{

    int sonBilet;
    int i;
    int enbuyuksayi=ptr->sonBilet;
    

    for(i=1; i<=n; i++,ptr++) 
    {
        if(ptr->sonBilet>enbuyuksayi)  //en y�ksek bilet fiyat� hesaplan�yor
        {
            enbuyuksayi=ptr->sonBilet;
        }
    }

    printf("en yuksek bilet fiyati : %d\n",enbuyuksayi);


}



void yolcuBiletFiyatBilgisi(struct Yolcu *ptr, int n,int giris)
{


    int bavulfiyat=0;



    int bavulkg;
    int sonBilet;
    int i;


    for(i=1; i<=n; i++,ptr++)
    {

        if ((ptr->yas) > 25)
        {
            //printf("YETISKIN YOLCU \n\n");


            bavulfiyat=  ((int) (ptr->b )- 12)*50;    // yolcu bavulu 12 kgdan fazla ise kg ba��na 50 TL al�n�yor
            sonBilet=bavulfiyat+300;          // yetiskin yolcu bilet fiyat� 300 TL
            ptr->sonBilet=sonBilet;
        }

        else if((ptr->yas) <= 25 && (ptr->yas)>18 )
        {
            //printf("INDIRIMLI OGRENC�\n\n");


            bavulfiyat=  ((int) (ptr->b )- 12 )*50;
            sonBilet=bavulfiyat+175;    //indirimli ��renci bilet fiyat� 175 TL
            ptr->sonBilet=sonBilet;
        }


        else if((ptr->yas) <= 18 && (ptr->yas)>6 )
        {
            //printf("COCUK YOLCU\n\n");


            bavulfiyat=  ((int) (ptr->b )- 12 )*50;
            sonBilet=bavulfiyat+150;     //�ocuk yolcu bilet fiyat� 150TL
            ptr->sonBilet=sonBilet;
        }

        else if((ptr->yas) <= 6 )
        {
            //printf("BEBEK YOLCU\n\n");


            bavulfiyat= ((int) (ptr->b )- 12 )*50;
            sonBilet=bavulfiyat+100;     //bebek yolcu bilet fiyat� 100 TL
            ptr->sonBilet=sonBilet;

        }
        if(giris=!0);
        {
            printf("%d TC kimlik numarasina sahip %s isimli\nyolcunun yasi : %d oldugundan ve bavul kg miktari  : %d oldugundan dolayi\nodemesi gereken fiyat= %d\n",ptr->tc,ptr->ad,ptr->yas,ptr->b,sonBilet);
            printf("\n\n");  //yolcular�n bilgileri ile birlikte �demesi gereken miktar ekrana yazd�r�ld�
        }

    }


}



void yolcuSil(struct Yolcu *ptr,struct Yolcu *sil,int n)
{
    int sira;
    int tc;
    int asama=1;
    int i;
    int silineceksira;
    printf("Kaydini silmek istediginiz yolcunun TC kimlik numarasi nedir: ");
    scanf("%d",&tc);
    for(sira=1;sira<=n;sira++,ptr++)
    {
        if(ptr->tc==tc)   
        {
            silineceksira=sira;   //kayd� silinecek yolcu bulundu
             
            asama=2;
          
        }
    }
    if(asama==1)
    {
        printf("Belirtilen TC'de kayit bulunamadi");  //yanl�� tc girildi ise kay�t bulunamad� yazd�r�ld�
        return 0;
    }
    else
    {
        for(i=1;i<silineceksira;i++)
        {
            ptr++;
            sil++;
        }
        
        sil++;
        for(i=1;i<=n-silineceksira;i++,ptr++,sil++)  //di�er yolculara 1 s�ra yukar� kayd�lar
        {
            strcpy(ptr->ad,sil->ad);
            strcpy(ptr->soyisim,sil->soyisim);
            strcpy(ptr->cinsiyet,sil->cinsiyet);
            ptr->b=sil->b;
            ptr->sonBilet=sil->sonBilet;
            ptr->tc=sil->tc;
            ptr->telno=sil->telno;
            ptr->yas=sil->yas;
        }
    }
    
}


void yolcuBilgileriniGuncelle(struct Yolcu *ptr, int n)
{


  int tc;
    int bavulkg;
    int i=0;

    printf("kaydi g�ncellenecek yolcunun TC kimlik numarasi: ");
    scanf("%d",&tc);

    while( i<n )
    {


        if( tc == ptr->tc)
        {


            printf("%d TC kimlik nosuna sahip yolcunun  bilgilerini giriniz: \n",tc);

            printf("ad : ");
            scanf("%s",ptr->ad);

            printf("soyisim : ");
            scanf("%s",ptr->soyisim);

            printf("cinsiyet : ");
            scanf("%s",ptr->cinsiyet);


            printf("Telefon numarasi : ");
            scanf("%d",&ptr->telno);

            printf("yas : ");
            scanf("%d",&ptr->yas);

            printf("Yolcunun Bavulu kac kg : ");
            scanf("%d",&bavulkg);

            printf("-----------------------------------\n");
            printf("-----------------------------------\n");


        
            ptr->b=bavulkg;

            break;

        }


        if(tc != ptr->tc) //yanl�� tc girildiyse
        {

            printf("%d TC kimlik numarasina sahip bir yolcu  listede yok \n",tc);
        }

        i++;
        ptr++;
    }


}




void kayitListele(struct Yolcu *ptr,int n)
{


    int i=0;

    while(i<n)
    {



        printf("%d TC NOSUNA SAHIP YOLCU BILGILERI \n",ptr->tc);


        printf("Yolcunun  adi  : %s\n",ptr->ad);

        printf("Yolcunun Soyismi  : %s\n",ptr->soyisim);

        printf("Yolcunun cinsiyeti : %s\n",ptr->cinsiyet);

        printf("Yolcunun telefon numarasi  : %d\n",ptr->telno);

        printf("Yolcunun Yasi  : %d\n",ptr->yas);

        printf("Yolcu bavulunun agirligi : %d\n",ptr->b);

        printf("Yolcunun biletinin fiyati : %d\n",ptr->sonBilet);

        printf("\n**\n");

        i++;
        ptr++;

    }

    printf("Listeleme islemi tamamlandi \n");


}





void YolcuEkle (struct Yolcu *ptr,int yolcusayisi,int n)
{

    if(n>=1)
    {
    	
        int bavulkg;
        
        int j;
        int i;
        int bavulfiyat;
        int sonBilet;
        for(i=1; i<=yolcusayisi-n; i++)
        {
            ptr++;
        }
        
        for(i=0; i<n; i++,ptr++)
        {
            bavulfiyat=0;

            printf("%d. Yolcu bilgilerini giriniz\n",i+1);

            printf("ad : ");
            scanf("%s",ptr->ad);

            printf("soyisim : ");
            scanf("%s",ptr->soyisim);

            printf("cinsiyet : ");
            scanf("%s",ptr->cinsiyet);

            printf("TC kimlik no : ");
            scanf("%d",&ptr->tc);

            printf("Telefon numarasi : ");
            scanf("%d",&ptr->telno);

            printf("yas : ");
            scanf("%d",&ptr->yas);

            printf("-----------------------------------\n");
            printf("-----------------------------------\n");
            
                 
            for(j=0; j<1; j++)
            {

                printf("%d. Yolcunun Bavulu kac kg\n(her yolcunun 12 kg hakki vardir\n12kg+ bavula sahip olan yolculardan kg basina 50 TL alinacaktir) : ",i+1);
                scanf("%d",&bavulkg);

                ptr->b=bavulkg;

                printf("-----------------------------------\n");
                printf("-----------------------------------\n");

            }
            
            
            
            if (ptr->yas >= 25)
            {
                //printf("YETISKIN YOLCU \n\n");


                if(ptr->b>12)
                {
                bavulfiyat=  ((int) (ptr->b )- 12 )*50;
                }
                sonBilet=bavulfiyat+300;
                ptr->sonBilet=sonBilet;
            }

            else if(ptr->yas <= 25 && ptr->yas>18 )
            {
                //printf("INDIRIMLI OGRENC�\n\n");


                if(ptr->b>12)
                {
                bavulfiyat=  ((int) (ptr->b )- 12 )*50;
                }
                sonBilet=bavulfiyat+175;
                ptr->sonBilet=sonBilet;
            }


            else if(ptr->yas<= 18 && ptr->yas>6 )
            {
                //printf("COCUK YOLCU\n\n");


                if(ptr->b>12)
                {
                bavulfiyat=  ((int) (ptr->b )- 12 )*50;
                }
                sonBilet=bavulfiyat+150;
                ptr->sonBilet=sonBilet;
            }

            else if(ptr->yas<=6)
            {
                //printf("BEBEK YOLCU\n\n");


                if(ptr->b>12)
                {
                bavulfiyat=  ((int) (ptr->b )- 12 )*50;
                }
                sonBilet=bavulfiyat+100;
                ptr->sonBilet=sonBilet;

            }

        }


        printf("kayit islemi tamamlandi\n");


    }

}


int n; //eklenecek yolcu say�s�


int main(int argc, char *argv[])
{

    yolcuptr = (struct Yolcu*)malloc(n*sizeof(struct Yolcu)); // malloc ile yer ayr�ld�
    struct Yolcu *ptr = yolcuptr;  //bellekte ayr�lan yerin adresinin tutsun diye ptr pointer� olu�turuldu
    struct Yolcu *sil = yolcuptr; //yolcu silmede silincek yolcunun s�ra numaras�n� de�i�tirmek amac� ile pointer olu�turuldu

    int islem;

    int menu=1;

    int yolcusayisi=0;

    while(menu)
    {
                                  //ANA MEN�
        printf("\n\n");
        printf("\t\t\t\t\t--->TURKISH AIRLINES (THY) HOSGELDINIZ<---\n\n");
        printf("\t\t\t\t\t\tISTANBUL-KONYA 20:22 SEFER UCAGI\n\n");
        printf("\t\t\t\t\t YOLCU EKLE(1)\n");
        printf("\t\t\t\t\t YOLCU LISTELE(2)\n");
        printf("\t\t\t\t\t YOLCU BILGILERI GUNCELLE(3)\n");
        printf("\t\t\t\t\t YOLCU SIL(4)\n");
        printf("\t\t\t\t\t YOLCUNUN ODEYECEGI BILET FIYAT BILGISI (5)\n");
        printf("\t\t\t\t\t EN YUKSEK BILET FIYATI (6)\n");

        printf("\t\t\t\t\t CIKIS(0)\n");
        printf("Seciniz=>");
        scanf("%d",&islem);



        switch(islem)
        {
        case 1:

            printf("Kac yolcu kayit edeceksiniz? : ");
            scanf("%d",&n);
            yolcusayisi=yolcusayisi+n;
            ptr = realloc(yolcuptr,yolcusayisi);    //tekar yolcu ekleme durumunda realloc ile bellek g�ncellendi
            sil = realloc(yolcuptr,yolcusayisi);    
            YolcuEkle(ptr,yolcusayisi,n);
            break;

        case 2:

            kayitListele(ptr,yolcusayisi);
            break;

        case 3:
            yolcuBilgileriniGuncelle(ptr,yolcusayisi);
            break;


        case 4:
            yolcuSil(ptr,sil,yolcusayisi);
            yolcusayisi=yolcusayisi-1;  // silinen yolcudan sonra ki�i say�s� bir azald�
            ptr = realloc(yolcuptr,yolcusayisi);  //bellek g�ncellemesi realloc ile yap�ld�
            sil = realloc(yolcuptr,yolcusayisi);
            break;

        case 5:
            yolcuBiletFiyatBilgisi(ptr,yolcusayisi,1);
            break;

            break;

        case 6:
            enyuksekbiletfiyati(ptr,yolcusayisi);
            break;

        case 0:
            exit (main); 
            break;
        }

    }

    return 0;
}

