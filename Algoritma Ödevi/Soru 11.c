#include <stdio.h>

int main()
{
    int yas;  // Ya� i�in bir tamsay� de�i�ken tan�mlan�r

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);  // Ya� giri�i al�n�r

    // Ya� de�erine g�re oy kullanma yeterlili�i kontrol edilir
    if (yas >= 18) {
        printf("Oy kullanmak i�in yasiniz yeterli.\n");
    }
    else {
        printf("Oy kullanmak icin yasiniz yeterli degil.\n");
    }

    return 0;
}

//int ile yasi tanimiyoruz.
//kullan�c�dan ya� de�erini girmesini isteyip scanf ile ya� giri�ini tan�ml�yoruz.
//if ve else ile ya��n�n 18 den b�y�k olup olmad���na bakarak ekrana "Oy kullanmak i�in ya��n�z yeterli." veya "Oy kullanmak i�in ya��n�z yeterli de�il." yazd�r�yoruz.
