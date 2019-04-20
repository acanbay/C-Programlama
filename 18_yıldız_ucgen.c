/*
1) Kullanicidan bir sayi alinir
2) bu sayiya gore satir ve sutun sayilari belirlenerek ucgen olusturacak *lar ekrana bastirilir
* sayisi her satirda bir artar
3) 2'deki islem tersine yaptirilir
yildiz sayisi her satirda 1 azalir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi,satir,sutun;
	//1
	printf("Lutfen bir sayi giriniz...\n");
	scanf("%d",&sayi);
	printf("\n");
	//2
	for(satir=1;satir<=sayi;satir++){
		for(sutun=1;sutun<=satir;sutun++){
			printf("*");
		}
		printf("\n");
	}
	//3
	for(satir=1;satir<=sayi;satir++){
		for(sutun=sayi-satir-1;sutun>=0;sutun--){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
