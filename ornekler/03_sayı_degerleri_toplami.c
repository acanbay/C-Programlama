/*
0) Kullanilacak veriler tanimlanir
1) Kullanicidan sayi alinir
2) Sayinin basamaklarinin sayi degerleri bulunur
3) Bu sayi degerleri toplanir
4) Sonuc ekrana yazdirilir
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
	//0
	int sayi,birler,onlar,yuzler,binler,onbinler;
	//1
	printf("En fazla 5 basamakli bir sayi giriniz...\a\n");
		scanf("%d",&sayi);
	//2
	onbinler = sayi/10000; //sayimiz int oldugu icin virgulden sonrasi alinmaz
	binler = (sayi%10000)/1000; //% ifadesi soldaki sayinin sagdaki sayiya gore modunu alir
	yuzler = (sayi%1000)/100;
	onlar = (sayi%100)/10;
	birler = sayi%10;
	//3
	int sayidegeri = birler + onlar + yuzler + binler + onbinler;
	//4
	printf("Girdiginiz sayinin basamak degerleri toplami = %d \n",sayidegeri);

	return 0;
}

