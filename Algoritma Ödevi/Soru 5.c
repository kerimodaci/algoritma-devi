#include <stdio.h>


int main(){

    int kenar1, kenar2, kare, cevre;

printf("Kisa Kenar giriniz: ");
scanf("%d",& kenar1);

printf("Uzun Kenar giriniz: ");
scanf("%d",& kenar2);

kare = kenar1*kenar2;
cevre = 2*(kenar1+kenar2);

printf("Dikdortgenin Cevresi : %d", cevre);
printf("Dikdortgenin Alani : %d", kare);

    return 0;
}

//int ile de�i�kenleri tan�mlad�ktan sonra k�sa ve uzun kenar giri�ini kullan�c�dan istedik.
//Alan ve cevre hesaplamalar�n� tan�mlad�k ,cevre ve alan hesaplamalar�n� printf ile ekrana yazd�rd�k.

