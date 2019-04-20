/*
Sinav sonuclarina gore yorumlama yapilir.

0-30 puan arasi "Acilen dersi birakmalisin"
30-50 puan arasi "Cok zorlanacaksin cok"
50-80 puan arasi "Idare eder"
80-100 puan arasi "Cok iyi puan"

0) Kullanilacak veriler tanimlanir
1) Kullanicidan puani alinir
2) Puan test edilir ve ilgili yorum ekrana bastirilir
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//0
	int puan;
	
	//1
	printf("Lutfen aldiginiz puani giriniz...\a\n");
	scanf("%d",&puan);
	
	//2
	if(puan >= 80 && puan <= 100 ){
		printf("Cok iyi puan...\n");
	}
	else if(puan >= 50 && puan <= 100){
		printf("Idare eder...\n");
	}
	else if(puan >= 30 && puan <= 100){
		printf("Cok zorlanacaksin cok...\n");
	}
	else if(puan >= 0 && puan <= 100){
		printf("Acilen dersi birakmalisin...\n");
	}
	else{
		printf("Lutfen 0 ile 100 arasinda gecerli bir not giriniz...\n");
	}
	return 0;
}


