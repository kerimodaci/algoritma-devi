//matematiksel i�lemler i�in math.h k�t�phanesini ekledik ve int ile say�y� tan�mlad�k.
//printf ile kullan�c�dan say� giri�ini ald�k ve tan�mlatt�k.
//if ve else ile say� ikiye tam b�l�n�yorsa �ift,kalanl� b�l�n�yorsa tek cevab�n� verecek kodu yazd�k.
//son olarak sonucu ekrana yazd�rd�k. 



#include <stdio.h>
#include <math.h>

int main(){

	int sayi;

	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);

	if(sayi%2 == 0)

    printf("%d sayisi cifttir.", sayi);

	else

	printf("%d sayisi tektir.", sayi);
}

