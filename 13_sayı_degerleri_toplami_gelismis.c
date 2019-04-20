/*
1) Kullanicidan sayi alinir
2) Sayinin basamaklarinin sayi degerleri bulunur ve bu sayi degerleri toplanir
   Sonuc ekrana yazdirilir
3) Kullaniciya tekrar islem yapip yapmayacagi sorulur
   Yapacaksa 1'e donulur
   Yapmayacaksa cikis yapilir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi,basamak,toplam,m;
	char devam;
		
	menu:	
		basamak=0;
		toplam=0;
		m=10;
	//1
		printf("Lutfen sayi degerleri toplamini ogrenmek istediginiz sayiyi giriniz...\n");
		scanf("%d",&sayi);
		int sa=sayi;
	//2
		if (sayi>0){
			
			do{
				toplam += sayi%m;
				basamak++;
				sayi = sayi/10; //sayi int oldugundan 10 a bolununce tam kismi alinir.
			}while(sayi > 0);
			printf("%d sayisi %d basamaklidir ve sayi degerleri toplami  %d'dir'\n\n",sa,basamak,toplam);
		}
		else {
			printf("Lutfen pozitif bir deger giriniz!\a\n\n");
		}
	//3
	printf("Devam etmek istiyor musunuz? (Devam etmek icin E'ye basiniz)...)\n");
	scanf(" %c",&devam);
	if(devam=='E'||devam=='e'){
		goto menu;
	}
	printf("Programdan basarili bir sekilde cikis yapildi!\a\n");
	
	return 0;
}
