
#include <stdio.h>
#include <conio.h>

void main(void)
{
 char devammi;
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 do 
 { 



printf("\n 1. sayi : ");
scanf("%f",&sayi1);
fflush(stdin);

printf("\n 2. sayi : ");
scanf("%f",&sayi2);
fflush(stdin);

printf("\n Yapilacak islem ? ( + - / * % ): ");
scanf("%c",&islem);
fflush(stdin);
if( islem == '+')
 sonuc = sayi1 + sayi2;
  else if( islem == '-')
   sonuc = sayi1 - sayi2;
  else if( islem == '*')
   sonuc = sayi1 * sayi2;
  else if( islem == '/')
  {
   if( sayi2 > 0)
    sonuc = sayi1/sayi2;
   else
    printf("\n HATA: Sifira bolunme hatasi.");
  }
  else
   printf("\n Gecerli bir islem belirtmediniz.");

  printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);

printf("\n\n Baska hesaplama yapacak misiniz?(E/H): ");
devammi = getchar();
fflush(stdin);
 }
 while(devammi == 'E' || devammi == 'e');
}



//<conio.h> k�t�phanesini fflush(stdin) parametresini kullanabilmek i�in program�m�za ekledik.
//char,float ve double ile devammi,sayi1,sayi2,sonuc ve islem degerlerini tanimladik.
//kullan�c�dan 2 say� girmesini istedik ve scanf ile okuttuk.
//if,else ve else if ile se�imler yapmay� sa�lad�k. Hatal� bir se�im yap�ld���nda hatal� giri� yapt���m�z� belirten bir yaz�y� ekrana yazd�rmay� sa�lad�k.
//i�lemlerden sonra ba�ka hesap yapmak isteyip istemedi�imizi soran bir yaz�y� ekrana yazd�rd�k.Cevap olarak evet dedi�imizde i�lemlere devam edebiliyor,hay�r dedi�imizde ise program� sonland�r�yoruz.

