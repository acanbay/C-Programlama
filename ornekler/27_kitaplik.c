/*
A) Kitaplar Yapisi

B) Girdi olarak kitap sayisi ve kitaplik yapisinin kitap ogesini alan void fonksiyonu
1) kitap sayisi kadar kitabi bastirir

c) 1) Kullanicidan kac kitap girecegi bilgisi alinir
2) Kitap sayisi kadar kitap bilgisi kullanicidan alinir
   Bu islem yapilirken kitaplar yapisindan faydalanilir.
3) kitap sayisi ve kitap ogesi B'de tanimlanan fonksiyona gonderilir
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//A
struct kitaplar{
	char ad[50];
	char yazar[30];
}kitap[100];
//B
void kitapbilgileri(int sayi, struct kitaplar kitap[100]){
	//1
	printf("\n-------------------------------------------------------------\n");
	printf("KITAPLARINIZ :\n");
	int i=0;
	for (i=0;i<sayi;i++){
		printf("-------------------------------------------------------------\n");
		printf("Kitap Adi\t: %s\nYazari\t\t: %s\n",kitap[i].ad,kitap[i].yazar);
	}
	printf("-------------------------------------------------------------\n");
}
//C
int main()
{
	int sayi;
	//1
	printf("Kac kitap gireceginizi belirtiniz...\n");
	scanf("%d",&sayi);
	int i=0;
	//2
	for (i=0;i<sayi;i++){
		printf("\n");
		printf("%d. kitabin\n",i+1);
		printf("Adi\t: ");
		scanf("%s",&kitap[i].ad);
		printf("Yazari\t: ");
		scanf("%s",&kitap[i].yazar);	
	}
	//3
	kitapbilgileri(sayi,kitap);
}

