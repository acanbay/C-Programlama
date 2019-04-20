/*
1) Kullaniciya mevsimlerin bulundugu 4 secenek sunulur ve birini secmesi istenir
   Secim kaydedilir
2) Kullanicinin yaptigi secime gore secilen mevsim icindeki aylar ekrana bastirilir
   2.a) Secim hataliysa uyari verilip basa dondurulur
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int secim;
	//1
	printf("Lutfen seciminizi yapiniz...\n");
	printf(" 1: Ilkbahar\n 2: Yaz\n 3: Sonbahar\n 4: kis\n");
	printf("*****************************\n");
	scanf("%d",&secim);
	//2
	switch(secim){
		case 1:
			printf("Mart, Nisan ve Mayis ilkbaharin aylaridir.\n");
			break;
		case 2:
			printf("Haziran, Temmuz ve Agustos yaz aylaridir.\n");
			break;
		case 3:
			printf("Eylul, Ekim ve Kasim sonbahar aylaridir.\n");
			break;
		case 4:
			printf("Aralik, Ocak ve Subat kis aylaridir.\n");
			break;
		//2.a
		default:
			printf("lutfen 1-4 arasinda bir secim yapiniz...\a\n");
	}
	return 0;
}
