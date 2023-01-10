
#include<stdio.h>
#include<stdlib.h>      //bu programda strlen parametresini kullanabilmek için stdlib.h kütüphanesini kullandýýk.

int main()
{
	char dizi[50];    // metin icin char kullandýk

	printf("Lutfen metni giriniz.");
	gets(dizi);
	printf("Uzunluk:%d",strlen(dizi));

	printf("\n");
	return 0;

}
