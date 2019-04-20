/*
Baslangiclar	5.5 TL
Ara Sicaklar	7.5 TL
Ana Yemekler	17.75 TL
Salatalar		12 TL
Tatlilar		11.25 TL
Icecekler		2.25 TL

1) Kullaniciya bir menu yazdirilir ve buradan secim yapmasi istenir
   Isterse cikis yapabilir.
2) Yaptigi secime gore kac porsiyon istedigi bilgisi alinir
   porsiyona gore urun fiyati hesaplanir
3) Tekrar menu ekranina donulur
4) Kullanici cikis yaptiginda hesap bastirilir
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
	float siparisno;
	float toplam,porsiyon;	
	//1
	menu:	
		printf("*************************************************************\n");
		printf("_____________________________________________________________\n");
		printf("MENU\t\tSIPARIS KODU\tFIYAT\n");
		printf("Baslangiclar\t\t1\t5.5 TL\n");
		printf("Ara Sicaklar\t\t2\t7.5 TL\n");
		printf("Ana Yemekler\t\t3\t17.75 TL\n");
		printf("Salatalar\t\t4\t12 TL\n");
		printf("Tatlilar\t\t5\t11.25 TL\n");
		printf("Icecekler\t\t6\t2.25 TL\n");		
		printf("_____________________________________________________________\n");			
		printf("Lutfen yemek istediginiz urunun siparis kodunu giriniz...\n\n");
		printf("Cikmak icin 0'a basiniz...\n");
		printf("*************************************************************\n");
		scanf("%f",&siparisno); //float istiyorum yoksa 9.5 gibi degerlerde sonsuz donguye girer
	//2	
	if (siparisno == 0.){
		goto cikis;
	}
	else if (siparisno != (int)siparisno){
		printf("Lutfen siparis kodunda kusuratli numara girmeyiniz!\a\n\n");
		goto menu;
	}
	else{
		int sn = (int)sn;
		switch (sn){
			case 1:
		   		printf("Kac porsiyon istersiniz?\n");
				scanf("%f",&porsiyon);
				toplam += porsiyon*5.5;
				break;
			case 2:
				printf("Kac porsiyon istersiniz?\n");
				scanf("%f",&porsiyon);
				toplam += porsiyon*7.5;
				break;
			case 3:
				printf("Kac porsiyon istersiniz?\n");
				scanf("%f",&porsiyon);
				toplam += porsiyon*17.5;
				break;
			case 4:
				printf("Kac porsiyon istersiniz?\n");
				scanf("%f",&porsiyon);
				toplam += porsiyon*12;
				break;
			case 5:
				printf("Kac porsiyon istersiniz?\n");
				scanf("%f",&porsiyon);
				toplam += porsiyon*11.25;
				break;
			case 6:
				printf("Kac porsiyon istersiniz?\n");
				scanf("%f",&porsiyon);
				toplam += porsiyon*2.25;
				break;
			default:
				printf("Lutfen 1-6   bir kod giriniz!\a\n");
				break;
		}
	}
	//3
	goto menu;
	//4
	cikis: 	printf("Toplam Tutar = %f\n",toplam);
	
	return 0;
}
