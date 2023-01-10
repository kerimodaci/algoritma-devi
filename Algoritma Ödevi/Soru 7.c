#include <stdio.h>

main()
{
	float yol;
	float zaman;                              //float ile yol,zaman ve hiz degerlerini tanimladik
	float hiz;

	printf("Gideceginiz mesafe (km) :");
	scanf("%f",&yol);
	printf("Gtimek istediginiz sure (saat) :");      //kullanicidan gitmek istedigi mesafe ve sure degerlerini isteyip scanf ile tanimlattik
	scanf("%f",&zaman);

	hiz = yol / zaman;
	printf("Gitmeniz gereken hiz = %f",hiz);    //sonrasinda hiz hesaplamasini da tanimladiktan sonra gidilmesi gereken hizi ekrana yazdirdik.
}



