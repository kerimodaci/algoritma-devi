#include <stdio.h>
#define pi 3.14

float alan(float cap){
	float sonuc;
	sonuc = pi * cap * cap;
	return sonuc;
}
float cevre(float cap){
	float sonuc;
	sonuc = 2 * pi * cap;
	return sonuc;
}

int main(){
	int daireYaricap,sec;

printf("Dairenin yaricapini giriniz : ");
scanf("%d",&daireYaricap);


printf("Dairenin alani : %f \n",alan(daireYaricap));
printf("Dairenin cevresi : %f",cevre(daireYaricap));

	return 0;
}

//define pi 3.14 ile pi degerini verdik. Float ile alan ve cevreleri tanýmladýk. Kullanýcýdan yarýcap degerini istedik 
//dairenin alan ve cevresini hesaplatip ekrana yazdirdik
