/*
Iki sayidan buyugunun (b) kucuge (k) gore modu alinir
b % k = d (kalan)
eger kalan 0'dan farkliysa buyuk sayi kucuge, kucuk sayi ise kalana esitlenir
b = k, k = d
Tekrar mod alma islemleri yapilarak kalan 0 cikana kadar devam edilir.
Kalanin 0 oldugu durumdaki kucuk sayi EBOB'dur

1) Kullanicidan 2 sayi istenir
2) EBOB analizi yapilir
3) Sonuc ekrana bastirilir
4) Devam etme ya da cikma secenegi sunulur
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi1,sayi2,kalan,buyuk,kucuk;
	char devam;
	
	//1	
	menu:	
		printf("EBOB'unu bulmak istediginiz iki adet pozitif tam sayi giriniz...'\n");
		scanf("%d%d",&sayi1,&sayi2);
	//2
		if (sayi1<=0||sayi2<=0) {
			printf("Girilen degerler hatali!\a\n\n");
			goto devam;
		}
		
		if (sayi1>sayi2){
			buyuk = sayi1;
			kucuk=sayi2;
		}
		else{
			buyuk=sayi2;
			kucuk=sayi1;
		}
		
		kalan = buyuk%kucuk;
		
		while (kalan !=0){
			buyuk=kucuk;
			kucuk=kalan;
			kalan = buyuk%kucuk;
		}
	//3
		printf("%d ile %d'nin EBOB'u = %d\n\n",sayi1,sayi2,kucuk);
	//4
	devam:
		printf("Devam etmek istiyor musunuz (E/H)?...\n");
		scanf(" %c",&devam);
		if(devam=='E'||devam=='e'){
			goto menu;
		}
		
	printf("Programdan basarili bir sekilde cikis yapildi!\a\n");
	
	return 0;
}
