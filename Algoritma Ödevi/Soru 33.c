
#include <stdio.h>

int main()
{
	int sayi, rakam, toplam = 0;              //int ile sayi,rakam ve toplam degerlerini tanýmladýk.
	printf("\nBir Sayi Giriniz : ");         //kullanýcýdan bir sayi degeri istedik ve scanf ile okuttuk.
	scanf("%i", &sayi);

	while(sayi > 0) {                   //while ile sayidaki rakamlari toplayacak bir denklem yazdik ve ekrana yazdirdik.
		rakam = sayi % 10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
	}
	printf("\nSayidaki rakamlarin toplami : %i", toplam);
	return 0;
}


