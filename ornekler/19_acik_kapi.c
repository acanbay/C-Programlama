/*
10 adet kapimiz var ve baslangicta hepsi kapali.
ilk turda kapilar kontrol edilecek ve kapali kapilar acilacak.
2. turda sadece 2'nin kati olan kapilar aciksa kapanacak kapaliysa acilacak.
3. turda sadece 3'un kati olan kapilar aciksa kapanacak kapaliysa acilacak.
4. turda sadece 4'un kati olan kapilar aciksa kapanacak kapaliysa acilacak.
Kisacasi tur katina gore belirlenecek bundan sonrasi. t. (t<10) tura kadar gidilecek.

1) Kapali kapilar seride olusturulur
2) Kapilara turlara gore uygulanacak islemler uygulanir
3) Sonuclar ekrana yazdirilir
   bu yapilirken her kapinin son durumu kontrol edilip istenilene uygun olanlar ekrana bastirilir.
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int t=10;
	//1
	int kapilar[10]={0};
	int tur,kapi;
	//2
	for(tur=0;tur<t;tur++){
		for(kapi=tur;kapi<10;kapi+=tur+1){
			kapilar[kapi] = !kapilar[kapi];
		}
	}
	//3
	printf("Acik Kapilarimiz sunlardir;\n");
	
	for (kapi=0;kapi<10;kapi++){
		if(kapilar[kapi]){
			printf("%d\n",kapi+1);
		}
	}	

	return 0;
}
