#include <stdio.h>

int main()
{
    int yas; 

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);  


    printf("Yasiniz %d ay, %d hafta, %d gun, %d saat, %d dakika ve %d saniyeye esittir.\n",
           yas * 12, yas * 52, yas * 365, yas * 8760, yas * 525600, yas * 31536000);

    return 0;
}

// int yas ile ya�� tan�mlad�ktan sonra kullan�c�dan ya� giri�ini istiyoruz.
// sonras�nda ya�� ay,hafta,g�n,saat,dakika ve saniyeye d�n��t�r�p ekrana yazd�r�yoruz.
