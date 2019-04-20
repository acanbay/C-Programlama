/*
sonuc=ax^2+bx+c denklemine gore islem yapilacaktir.

0) Veriler tanimlanir
1) Kullanicidan veriler alinir
2) Sonuc hesaplanir
3) Sonuc ekrana bastirilir
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//0
	float a,b,c,x;
	//1
	printf("Sirasiyla a, b, c ve x degerlerini giriniz...\a\n");
	scanf("%f%f%f%f",&a,&b,&c,&x);
		//2
	float sonuc = a*x*x+b*x+c;
		//3
	printf("Denklemin sonucu = %.3f \n", sonuc);
	
	return 0;
}

