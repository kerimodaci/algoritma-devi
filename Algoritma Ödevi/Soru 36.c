
#include <stdio.h>
#include <conio.h>

void main(void)
{
 int toplam = 0;
 int sayac = 0;
 int ogrsay = 0;
 int puan[50];

                                                                  

 printf("%Kac Ogrencinin Notu girilecek? : ",ogrsay+1);
 scanf("%i",&ogrsay);
 fflush(stdin);

 for(sayac=0 ; sayac <= ogrsay-1 ; sayac++ )
 {
  printf("%i. Ogrenicinin puani : ",sayac+1);
  scanf("%i",&puan[sayac]);
  fflush(stdin);

  toplam = toplam + puan[sayac];
 }

 printf("\n Ogrenci Sayisi = %i",sayac);
 printf("\n Puan Toplami = %i",toplam);
 printf("\n Puan Ortalamasi = %d",(toplam)/sayac);

 getch();
}

//int ile de�i�kenleri tan�mlad�k.
//kullan�c�dan ��renci say�s�n�n giri�ini ald�k.
//for d�ng�s� ile ��renci say�s� kadar puan giri�i ald�k.
//ekrana ��renci puanlar�n�n toplam� ve ortalamas�n� yazd�rd�k
