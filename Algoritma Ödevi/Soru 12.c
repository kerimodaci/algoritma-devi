
#include <stdio.h>

int main(void)
{
    int yil;  // Y�l i�in bir tamsay� de�i�ken tan�mlan�r        //int ile yil icin bir degisken tanimladik.

    printf("Lutfen bir yil giriniz: ");
    scanf("%d", &yil);  // Y�l giri�i al�n�r

    // Y�l de�erine g�re art�k y�l olup olmad��� kontrol edilir
    if ((yil % 4 == 0 && yil % 100 != 0) || yil % 400 == 0) {             //if ile artik yili,else ile ise artik yil olmayanlari ekrana yazdirdik.
        printf("Girdiginiz yil artik yildir.\n");
    }
    else {
        printf("Girdiginiz yil artik yil degildir.\n");
    }

    return 0;
}


//printf ile kullanicidan deger alip scanf ile giris aldik
//if ile artik yili,else ile ise artik yil olmayanlari ekrana yazdirdik.
