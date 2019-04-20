/*
Iki sayidan buyugunun (b) kucuge (k) gore modu alinir
b % k = d (kalan)
eger kalan 0'dan farkliysa buyuk sayi kucuge, kucuk sayi ise kalana esitlenir
b = k, k = d
Tekrar mod alma islemleri yapilarak kalan 0 cikana kadar devam edilir.
Kalanin 0 oldugu durumdaki kucuk sayi EBOB'dur

A EBOB fonksiyonu
1) sayi2 sifir degilse ebob islemine sokulur ve ilk girdi sayi 2, ikinci girdi sayi1'in sayi2'ye gore modu olacak sekilde
   tekrar ebob fonksiyonuna gonderilir
2) Sayi2 0 ise sayi1 ana fonksiyona dondurulur

B Ana fonksiyon
1) Kullanicidan iki sayi istenir
2) Sayilarin pozitif olmasi ve buyuk-kucuk olani belirlenir
3) Ebob islemini yaparak ekrana yazdirilir
   Bu yapilirken bebob fonksiyonu cagirilir
*/
#include <stdlib.h>
#include <stdio.h>
//A
int ebob(int sayi1,int sayi2){
	//1
	if (sayi2 !=0 ){
		return ebob(sayi2,sayi1%sayi2);
	}
	//2
	else{
		return sayi1;
	}
}
//B
int main()
{
	int sayi1, sayi2, buyuk, kucuk;
	devam:
	//1
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
	//3
	printf("EBOB(%d,%d) = %d\n\n",buyuk,kucuk,ebob(buyuk,kucuk));

	return 0;
}

