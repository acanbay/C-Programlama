/*
1) Kullaniciya yapilabilecek secenekler verilip secim yapmasi istenir.
   Kullanici isterse programdan cikis yapabilir
   Yaptigi secim kaydedilir
2) Secim sonucuna gore yapilacak islemlerin sayilari alinip islemler yailir
   Sonuclar ekrana basilir
3) Program basa dondurulur
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h> //ozel fonksiyonlar icin matematik kutuphanesi
int main()
{
	int islem;
	float sayi1,sayi2;
	
	menu:
	//1	
		printf("**************************************\n");
		printf("Yapmak istediginiz islemi seciniz...\n");
		printf(" 1: Toplama\n 2: Cikarma\n 3: Carpma\n 4: Bolme\n 5: Kok Alma\n 6: Kuvvet Alma\n");
		printf("Cikmak icin 0'a basin...\n");
		printf("**************************************\n");
		scanf("%d",&islem);
		
	if (islem == 0){
		goto cikis;
	}
	//2
	switch (islem){
		case 1:
			printf("Toplamak istediginiz iki sayiyi giriniz...\n");
			scanf("%f%f",&sayi1,&sayi2);
			printf("Sonuc = %.2f\n",sayi1+sayi2);
			break;
		case 2:
			printf("Sayinizi ve cikarmak istediginiz sayiyi sirayla giriniz...\n");
			scanf("%f%f",&sayi1,&sayi2);
			printf("Sonuc = %.2f\n",sayi1-sayi2);
		 	break;
		case 3:
			printf("Carpmak istediginiz iki sayiyi giriniz...\n");
			scanf("%f%f",&sayi1,&sayi2);
			printf("Sonuc = %.2f\n",sayi1*sayi2);
			break;
		case 4:
			printf("Bolecegigniz sayiyi ve kaca bolmek istediginizi sirayla giriniz...\n");
			scanf("%f%f",&sayi1,&sayi2);
			printf("Sonuc = %.2f\n",sayi1+sayi2);
			break;
		case 5:
			printf("Kokunu almak istediginiz sayiyi giriniz...\n");
			scanf("%f",&sayi1);
			printf("Kacinci dereceden kok alinacak?..\n");
			scanf("%f",&sayi2);
			printf("Sonuc = %.2f\n",pow(sayi1,(1/sayi2)));
			break;
		case 6:
			printf("ussunu almak istediginiz sayiyi giriniz...\n");
			scanf("%f",&sayi1);
			printf("Kacinci dereceden us alinacak?..\n");
			scanf("%f",&sayi2);
			printf("Sonuc = %.2f\n",pow(sayi1,sayi2));
			break;
		default:
			printf("Lutfen 1-6 arasinda bir sayi giriniz!\n");
			break;
	}
	//3
	goto menu;
	cikis: printf("Programdan cikis yapildi...\n");
	
	return 0;
}
