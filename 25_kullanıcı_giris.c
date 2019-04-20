/*
Program icerisinde kullanici adi ve parolasi tanimlidir

1) Kullanicidan bir kullanici adi ve parola girilmesi istenir
2) Girilenlerin gercek kullanici adi ve parola ile uyumlulugu denetlenir
   Eger dogruysa giris yaptirilir
   Kullanici adi hataliysa o kullanicinin olmadigi soylenir
   Parola hataliysa parolanin hatali oldugu soylenir.
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char kullaniciadi[20],parola[20];
	char gercekkullaniciadi[]="admin";
	char gercekparola[]="admin123";
	//1
	printf("Lutfen kullanici adinizi ve parolanizi giriniz...\n\n");
	printf("Kullanici adi: ");
	gets(kullaniciadi); //karakter dizilerini bu sekilde almak daha saglikli
	printf("Parola       : ");
	gets(parola);
	printf("\n");
	//2
	if(strcmp(kullaniciadi,gercekkullaniciadi)==0 && strcmp(parola,gercekparola)==0){
		printf("HOSGELDINIZ\n");
	}
	else if(strcmp(kullaniciadi,gercekkullaniciadi)!=0){
		printf("Boyle bir kullanici bulunmamaktadir!\a\n");
	}
	else{
		printf("Hatali parola!\a\n");
	}
	
	return 0;
}

