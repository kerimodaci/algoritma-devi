#include <stdio.h>

int main(){  

    int gun;

    printf("1-7 araliginda bir deger giriniz: ");
    scanf("%d", &gun);
    
    
    
    if ( gun == 1 )
    printf("Pazartesi");

    else if ( gun == 2 )
    printf("Sali");

    else if ( gun == 3 )
    printf("Carsamba");

    else if ( gun == 4 )
    printf("Persembe");

    else if ( gun == 5)
    printf("Cuma");

    else if ( gun == 6)
    printf("Cumartesi");

    else if ( gun == 7 )
    printf("Pazar");

    else
    printf("Lutfen 1-7 araliginda bir deger giriniz!");

    return 0; 
}

//�nce int ile gun degerini tan�mlad�k
//sonra kullan�c�dan 1 ile 7 aras�nda bir deger girmesini istedik ve scanf ile bu degeri okuttuk.
//if,else ve else if ile bu degerin hangi gune esdeger oldugunu bulup printf ile ekrana yazd�rd�k.


