
#include <stdio.h>

int main(void)
{
    int yil;  // Yýl için bir tamsayý deðiþken tanýmlanýr        //int ile yil icin bir degisken tanimladik.

    printf("Lutfen bir yil giriniz: ");
    scanf("%d", &yil);  // Yýl giriþi alýnýr

    // Yýl deðerine göre artýk yýl olup olmadýðý kontrol edilir
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
