
#include <stdio.h>

main()
{
	int i;                          //int ile i,faktoriyel ve sayi degerlerini tanimladik.,
	int faktoriyel = 1;
	int sayi;

	printf("Bir sayi giriniz: ");                    //kullanicidan bir sayi girmesini istedik ve scanf ile sayiyi okuttuk.
	scanf("%d",&sayi);

	for(i = 1; i <= sayi; i++)           //for ile sayinin faktoriyelini alabilecegimiz bir denklem yazdik ve sayinin faktoriyelini ekrana yazdirdik
	{
		faktoriyel *= i;
	}
	printf("%d != %d",sayi,faktoriyel);
}



