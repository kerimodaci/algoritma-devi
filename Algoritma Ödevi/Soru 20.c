#include <stdio.h>


int main()
{
 char evli = ' ';
 int cocuk = 0;



 printf("\n Evli misiniz? : ");
 scanf("%c",&evli);                        // kullan�c�dan evli olup olmad�g�n�n cevab�n� al�p scanf ile okuttuk.
 fflush(stdin);

 if( evli == 'E' || evli == 'e' )
 {
  printf("\n Kac cocugunuz var? : ");
  scanf("%i",&cocuk); 
  fflush(stdin);

  if( cocuk > 2)
  {
    printf("\n Buyuk bir aileniz var.");
  }
  else
  {
   printf("\n Kucuk bir aileniz var.");
  }
 }
 else if( evli == 'H' || evli == 'h' )                    // kullan�c�n�n verdi�i cevap evet ise ka� �ocu�u oldu�unu sorup �ocuk say�s�na g�re aile t�r�n� ekrana yazd�rd�k. Verdi�i cevap hay�r ise "Umar�m evlenirsiniz." cevab�n� ekrana yazd�rarak kodu sonland�rd�k.
  printf("\n Umarim evlenirsiniz.");
 else
  printf("\n Gecersiz girdi.");

return 0;
}
