
#include <stdio.h>


void main(void)
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};       //int ve char ile de�i�kenlerimizi tan�mlad�k.
 int aranan = 0;
 int konum = 0;
 int sayac = 0;

 char bulundu = 'Y';

 printf("\n Liste icerisinde aranacak sayi : ");
 scanf("%i",&aranan);

 for( sayac= 0; sayac < 10; sayac++ )         //for d�ng�s�yle belirledi�imiz say�lar�n aras�ndan say� giri�i ald���m�z say�y� arad�k.
 {
  if( sayilar[sayac] == aranan )
  {
   bulundu = 'E';
   konum = sayac + 1;
   break;
  }
 }

 if(bulundu == 'E' )
  printf("\n %i sayisi listenin %i. sirasinda.",aranan,konum);
 else
  printf("\n %i sayisi gecerli degil.",aranan);

 return 0;
}
