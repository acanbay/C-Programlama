/*
ideal kilo hesabi
Erkek icin:		idealkilo = 50+(2.3/2.54)(boy-152.4)
kadin icin:		idealkilo = 45.5+(2.3/2.54)(boy-152.4)

1) Kullanicidan cinsiyet verisi alinir
2) a) Cinsiyet verisi istenilen karakterlerden girildiyse
      kullanicidan boy ve kilo bbilgisi alinir
b) Eger cinsiyet yanlis karakterle girildiyse
   kullaniciya uyari verilir ve tekrar girdi yapmasi istenir
3) Kullanicinin cinsiyetine gore ideal kilo hesabi yapilir ve ekrana basilir
4) Kilo ve ideal kilo analizi yapilip ideal kilodan ne kadar uzak oldugu ekrana basilir
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char cinsiyet;
	double boy, kilo,ideal;
	//1
	printf("Cinsiyetinizi giriniz e/k...\n");
	scanf("%c",&cinsiyet);
	//2.a
	if (cinsiyet == 'k' || cinsiyet == 'e'){	
		printf("Boyunuzu cm olarak giriniz...\n");
		scanf("%lf",&boy);
		printf("Kilonuzu kg olarak giriniz...\n");
		scanf("%lf",&kilo);
	//3
		if (cinsiyet == 'k'){
			ideal = 45.5+(2.3/2.54)*(boy-152.4);
		}
		else {
			ideal = 50+(2.3/2.54)*(boy-152.4);
		}
		printf("Sizin ideal kilonuz %.2lf kilogramdir.\n",ideal);
	//4
		if (kilo > ideal){
			printf("%.2lf kg fazlaniz bulunmaktadir...\n",kilo-ideal);
		}
		else if (ideal > kilo){
			printf("%.2lf kg eksiginiz bulunmaktadir...\n",ideal-kilo);
		}
		else{
			printf("Tebrikler! Ideal kiloya sahipsiniz!\n");
		}
	}
	//2.b
	else{
		printf("Lutfen cinsiyetiniz icin gercerli bir ifade giriniz...");
	}
	
	return 0;
}
