#include <stdio.h>

int main()
{
	int sayi1,sayi2,toplam;

printf("Birinci sayiyi giriniz: ");
scanf("%d",&sayi1);

	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
toplam = sayi1 + sayi2;

	printf("Girilen sayilarin toplami: %d\n", toplam);

	return 0;
}

// int ile sayi degerlerini ve toplam degerini verecek degerleri tan�mlad�k. 
// sonras�nda printf ve scanf ile kullan�c�dan say� giri�lerini ald�k. 
// toplam degerine sayi1 + sayi2 degerini vererek iki sayiyi da toplattik ve cikan sonucu ekrana yazdirdik.
