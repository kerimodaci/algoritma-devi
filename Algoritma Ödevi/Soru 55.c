#include<stdio.h>
#include<stdlib.h>

int main()
{
	char cumle[100];
	int i;
	printf("Lutfen bir cumle giriniz:");
	gets(cumle);

	for(i=strlen(cumle);i>=0;i--)
	{
		printf("%c",cumle[i]);

	}
	return 0;
}

//char ile cumle degerini tan�mlad�ktan sonra kullan�c�dan bir cumle girmesini istedik.
// sonras�nda for d�ng�s� yard�m�yla c�mleyi tersine �evirdik ve printf ile ekrana yazd�rd�k.
