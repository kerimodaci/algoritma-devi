#include <stdio.h>

int main()
{
 int baslangic = 0;
 int bitis = 0;
 int sayi = 0;
 int n = 0;
 char asal = 'E';


 printf("\n baslangic sayisini giriniz : ");
 scanf("%i",&baslangic);


 printf("\n bitis sayisini giriniz : ");
 scanf("%i",&bitis);


 printf("\n\n %i ve %i arasindaki asal sayilar : ",baslangic,bitis);
 printf("\n -----------------------------------\n");

 for( sayi = baslangic ; sayi <= bitis ; sayi++ )
 {
  asal = 'E';
  for( n = 2 ; n < sayi ; n++ )
  {
   if( sayi % n == 0 )
    asal = 'H' ;
  }
  if( asal == 'E' )
   printf("\t%i",sayi);
 }

 return 0;
}



//int ve char ile baslangic,bitis,sayi,n ve asal degerlerini tan�mlad�k.

//kullan�c�dan ba�lang�� ve biti� say�lar�n� ald�k ve scanf ile okuttuk.

//sonras�nda for d�ng�s� ve if ile asal olup olmayanlar� birbirinden ay�rd�k ve ekrana yazd�rd�k.
