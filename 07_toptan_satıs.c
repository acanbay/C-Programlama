/*
0-100	arasi urun icin birim fiyati: 3 TL
100-200	arasi urun icin birim fiyati: 2.5 TL
200-300	arasi urun icin birim fiyati: 2 TL
300-400	arasi urun icin birim fiyati: 1.25 TL
400'den fazla urun icin birim fiyati: 0.75 TL

1) Kullanicidan kac urun alacagi bilgisi alinir	
   1.a) Eger yanlis giris yapilirsa uyari verilip basa dondurulur
2) Adete gore birim ucret belirlenir
3) Fiyat hesaplanir
4) Once fiyat bilgisi sonra birim fiyat bilgisi ekrana bastirilir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int adet;
	double fiyat,adetfiyati;
	//1
	printf("Kac adet urun alacaksiniz? \n");
	scanf("%d",&adet);
	//2
	if(adet>=400){
		adetfiyati=0.75;
	}
	else if(adet>=300){
		adetfiyati=1.25;
	}
	else if(adet>=200){
		adetfiyati=2;
	}
	else if(adet>=100){
		adetfiyati=2.5;
	}
	else if(adet>0){
		adetfiyati=3;
	}
	//1.a
	else{
		printf("Lutfen dogru adet miktari giriniz! \n");
	}
	//3
	fiyat=adetfiyati*adet;
	//4
	printf("Odemeniz gereken toplam tutar %.2lf TL'dir \n",fiyat);
	printf("%d adet urun icin birim fiyati = %.2lf TL \n",adet,adetfiyati);
	
	return 0;
}
