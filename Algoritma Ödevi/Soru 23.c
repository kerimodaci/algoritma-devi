
#include <stdio.h>

void main(void)
{
 int no = 0;



 printf("\n Dogal Sayilar");
 printf("\n -------------");

 for(no = 1; no <= 50; no=no+1)
 {
  printf("\t %i",no);
 }

 printf("\n\n Tek Sayilar");
 printf("\n -------------");

 for(no = 1; no <= 50; no=no+2)
 {
  printf("\t %i",no);
 }

 printf("\n\n Cift Sayilar");
 printf("\n -------------");

 for(no = 0; no <= 50; no=no+2)
 {
  printf("\t %i",no);
 }

 return 0;
}




//int ile no degerini tanimladik
//for d�ng�s� ile 1 den 50 ye kadar olan dogal sayilar,tek sayilar ve cift sayilari belirledik.
//printf ile �st ba�l�klar� ve say�lar� ekrana yazd�rd�k.
