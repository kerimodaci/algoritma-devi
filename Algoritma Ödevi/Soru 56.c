
#include <stdio.h>
#include <string.h>

void main(void)
{
      char metin[100];       //metin girisi i�in char
      char temp;

      int uzunluk = 0;
      int m = 0,n = 0;



      printf("\n Bir metin giriniz : " );
      gets(metin);


      uzunluk = strlen(metin);

      for( m = 0 ; m < uzunluk - 1; m++ )        //for d�ng�s� ve if ile harfleri s�ralamaya koyup printf ile ekrana yazd�rd�k.
      {
            for( n = m+1 ; n < uzunluk; n++ )
          {
              if( metin[m] > metin[n] )
              {
                  temp = metin[m];
                  metin[m] = metin[n];
                  metin[n] = temp;
              }
          }
      }

      printf("\n Harflerinin siralamasi %s",metin);
      return 0;
}
