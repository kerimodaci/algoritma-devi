#include <stdio.h>

main()
{
	int sayi1,sayi2;
	int secim;

	printf("1.Sayiyi seciniz: ");
	scanf("%d",&sayi1);
	printf("2.Sayiyi giriniz: ");
	scanf("%d",&sayi2);

	printf("\n******Seciminizi giriniz******\n");
	printf("1.TOPLAMA\n");
	printf("2.CIKARMA\n");
	printf("3.CARPMA\n");
	printf("4.BOLME\n");

	printf("Seciminizi giriniz: ");
	scanf("%d",&secim);

	if(secim == 1){
		printf("Toplama isleminin sonucu %d dir.", sayi1 + sayi2);
	}
	else if(secim == 2){
		printf("Cikarma isleminin sonucu %d dir.", sayi1 - sayi2);
	}
	else if(secim == 3){
		printf("Carpma isleminin sonucu %d dir.", sayi1 * sayi2);
	}else if(secim == 4){
		printf("Carpma isleminin sonucu %d dir.", sayi1 / sayi2);
	}
	else{
		printf("Dogru secim yapiniz !!!");
	}

}


//int ile sayi1,sayi2 ve secim de�erlerini tan�mlad�k.
//kullan�c�dan 2 say� giri�i istedik ve scanf ile okuttuk.
//if,else ve else if ile denklemleri yaz�p i�lemlerin sonu�lar�n� ekrana yazd�rd�k.
