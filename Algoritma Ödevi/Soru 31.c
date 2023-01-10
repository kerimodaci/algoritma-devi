
#include <stdio.h>


int main()             //int ile sayi degerini tanýmladýk.
{
 int sayi = 0;


 while( sayi >= 0)          //while ile sayý 0 dan büyük veya eþit iken döngüyü devam ettirmesi ve kodun durmamasý için bir denklem girdik.
 {
  printf("\nSayi? : ");
  scanf("%i",&sayi);


  printf("%i sayisini girdiniz.",sayi);         //negatif bir sayý girdiðimizde ise "x sayýsýný girdiniz" yazýsýný ekrana yazdýrdýk.
 }
}

