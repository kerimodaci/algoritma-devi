
#include<stdio.h>
#include<stdlib.h>      sdlib.h k�t�phanesini metinleri birle�tirmek i�in kulland�k.

int main()
{
	char metin1[50], metin2[50];
	printf("Adi giriniz:");
	gets(metin1);

	printf("Soyadi giriniz:");
	gets(metin2);

	strcat(metin1,metin2);
	printf("\nBirlestirilmis metin:");
	printf(metin1);
	printf("\n");
	return 0;

}

//char ile metin1 ve metin2 de�erlerini tan�mlad�k.
//sonras�nda kullan�c�dan ad� ve soyad� giri�ini sa�lad�k.
//strcat ile ad� ve soyad�n� birle�tirerek ekrana yazd�rd�k.
