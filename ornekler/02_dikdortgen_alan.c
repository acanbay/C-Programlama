/*
0) Kullanilacak veriler tanimlanir
1) Kullanicidan kenarlar alinir
2) Dikdortgen alani hesaplanir
3) Sonuc ekrana bastirilir
*/
#include <stdio.h>

int main()
{
	//0
	double a,b; //kullanilacak veriler tipleri ile tanimlaniyor
	//1
	printf("Dikdortgenin kenarlarini giriniz...\n");
	scanf("%lf%lf",&a,&b); //kullanicidan veri alma komutu
	//2 ve 3 ayni anda yaptiriliyor
	printf("Dikdortgenin alani =  %.2lf\n",a*b);

return 0;
}
