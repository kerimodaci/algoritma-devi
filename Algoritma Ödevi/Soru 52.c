
#include<stdio.h>
#include<stdlib.h>      //bu programda strlen parametresini kullanabilmek i�in stdlib.h k�t�phanesini kulland��k.

int main()
{
	char dizi[50];    // metin icin char kulland�k

	printf("Lutfen metni giriniz.");
	gets(dizi);
	printf("Uzunluk:%d",strlen(dizi));

	printf("\n");
	return 0;

}
