

#include <stdio.h>
#include <string.h>

void main(void)
{                     
      char kelime[100];
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char aranan;
      char harf;



      printf("\n Uzun bir cumle giriniz : " );
      gets(kelime);


      printf("\n Cumle icerisinde aranacak harf : ");
      scanf("%c",&aranan);


      uzunluk = strlen(kelime);

      for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];

          if(  aranan == harf)
              sayac++;
      }

      printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor.",kelime,aranan,sayac);

      return 0;
}


//strlen ile kelimeleri se�tikten sonra for d�ng�s�yle c�mle i�erisindeki arad���m�z harfleri arad�k.
//ekrana c�mle i�inde arad���m�z harften ka� adet oldu�unu belirten bir c�mle yazd�rd�k.
