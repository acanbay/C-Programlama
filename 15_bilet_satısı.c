/*
1) Kullaniciya bilet alip almayacagi sorulur almayacaksa cikis yaptirilir
2) Alinabilecek bilet syaisi ekrana basilir ve kac bilet almak istedigi verisi istenir
   bilet miktari alinabilecekten fazlaysa hata verilip tekrar sayi girmesi istenir
3) Kullanici cikis yaptiginda cikis bilgisi verilir ve kac bilet almis oldugu ekrana bastirilir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int biletsayi = 100;
	int alinan;
	char biletal,devam;
	//1	
	for(;biletsayi>0;){
		printf("Bilet almak ister misiniz? (E,H)'\n");
		scanf(" %c",&biletal);
	//2
		menu:
			if(biletal == 'e' || biletal == 'E'){
				printf("\nAlinabilecek toplam bilet sayisi: %d\n",biletsayi);
				printf("Kac tane bilet almak istiyorsunuz?\n");
				scanf("%d",&alinan);
				
				if (biletsayi-alinan >=0){
					printf("\nBilet alma islemi basariyla tamamlandi!\n\n");
					biletsayi -= alinan;
				}
				else{
					printf("Alinabilecek bilet miktarini astiniz!\a\n\n");
					goto menu;
				}		
			}
			else {
				break;
			}
	}		
	//3	
	printf("\nBilet alim programindan cikis yapildi!\a\n");	
	printf("Alinan bilet sayisi: %d \nKalan bilet sayisi: %d",100-biletsayi,biletsayi);

	return 0;
}
