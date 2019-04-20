/*
1) Kullanicidan iki kere parola istenir
2) Parolalarin tutarli olup olmadigi sorgulanir
a) Tutarsiz ise hata mesaji yazdirilip 1'e donulur
b) Tutarli ise bilgi mesaji verilip cikis yapilir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char sifre[80];
	char sifredogrulama[80];
	int i, yanlis;
	
	while(1){ //break komutuna kadar sonsuza dongu olusturur
		yanlis = 0;
		i=0;
		//1
		printf("Parolanizi giriniz...\n");
		scanf("%s",&sifre);
		printf("\nParolanizi tekrar giriniz...\n");
		scanf("%s",&sifredogrulama);
		//2
		while(!(sifre[i]=='\0' && sifredogrulama[i]=='\0')){ //herhangi birinde son karakterlere gelene kadar devam et
			//2.a
			if(sifre[i]!=sifredogrulama[i]){
				printf("\nParolar birbiri ile uyumsuz!\a\n");
				printf("Basa donuyorsunuz!\n\n");
				yanlis = 1;
				break;
			}
			else{
				i++;
			}
		}
		//2.b
		if(yanlis==0){
			printf("\nParolalar tutarli!\nKaydiniz tamamlandi...\n");
			break;
		}			
	}
	return 0;
}
