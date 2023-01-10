#include <stdio.h>


int main()
{
 char evli = ' ';
 int cocuk = 0;



 printf("\n Evli misiniz? : ");
 scanf("%c",&evli);                        // kullanýcýdan evli olup olmadýgýnýn cevabýný alýp scanf ile okuttuk.
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
 else if( evli == 'H' || evli == 'h' )                    // kullanýcýnýn verdiði cevap evet ise kaç çocuðu olduðunu sorup çocuk sayýsýna göre aile türünü ekrana yazdýrdýk. Verdiði cevap hayýr ise "Umarým evlenirsiniz." cevabýný ekrana yazdýrarak kodu sonlandýrdýk.
  printf("\n Umarim evlenirsiniz.");
 else
  printf("\n Gecersiz girdi.");

return 0;
}
