#include <stdio.h>

void main(void)
{
 int sayi = 0;                      //int ile n ve sayi degerlerini tan�mlad�k.
 int n = 0;


 printf("\n Bir sayi girin : ");                         //kullan�c�dan bir say� girmesini istedik ve scanf ile bu say�y� okuttuk.
 scanf("%i",&sayi);


 for(n=1;n<=10;n++)
 {                                                        //for d�ng�s� ile girilen say�n�n *1 den *10 a kadarki �arp�m tablosunu olu�turduk ve printf ile ekrana yazd�rd�k.
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );
 }

 return 0;
}


