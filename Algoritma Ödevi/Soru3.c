#include <stdio.h>

int main(){
	int kenar,alan,cevre;
	printf("Bir kenar giriniz: ");
	scanf("%d",&kenar);

	alan = kenar*kenar;
	cevre = kenar*4;

	printf("Alan = %d  Cevre = %d ", alan , cevre);

	return 0;
}

//int ile Kenar,alan ve cevre de�erlerini tan�mlad�ktan sonra kullan�c�dan kenar de�erini istedik ve kenar� tan�mlad�k. 
//Sonras�nda alan ve cevre degerlerini ekrana yazd�rd�k.
