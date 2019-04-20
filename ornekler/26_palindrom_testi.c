/*
Tersten yazilisi kendisi ile ayni olan kelimelere palindrom denir.

1) Kullanicidan kelime alinir
2) Kelime adresinin bitis RAM adresi belirlenir
   Kelimenin baslangic adresinden itibaren harfler saydirilir ve harflerin bittigi yer alinir.
   Unutulmamalidir ki bu biyis adresi kelime bittikten sonraki adrestir. Son harf bu bitis adresinden
   bir oncekia dreste kalmistir.
3) Kelimenin sonundan baslayan harfler ile basindan baslayan harfler sirasiyla test edilir.
   Bu yapilirken her seferinde bitis adresi 1 azaltilir ve baslangic adresi 1 arttirilir.
4) Kelimenin palindrom olup olmadigi bilgisi bastirilir.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char kelime[30];
	char *baslangicadresi, *bitisadresi;
	//1
	printf("Lutfen kelimenizi giriniz...\n");
	gets(kelime);
	printf("\n");
	//2
	for(bitisadresi=&kelime; *bitisadresi !=NULL; bitisadresi++);
	//3
	for(baslangicadresi=&kelime,bitisadresi--;bitisadresi>=baslangicadresi;){
		if(*bitisadresi == *baslangicadresi){
			bitisadresi--;
			baslangicadresi++;
		}
		else{
			break;
		}
	}
	//4
	if(baslangicadresi>bitisadresi){
		puts(kelime); //string'i ekrana yazdirir
		printf("Palindromdur...");
	}
	else{
		puts(kelime);
		printf("Palindrom Degildir...");
	}
	return 0;
}

