/*
Faktoriyel hesabi icin faktoriyel adli degisken alinan sayiya esitlenir,
Sonra sayi birer birer azaltilarak (sayi 0 olana kadar) her azaltmadan sonraki sayi degeri
faktoriyel ile carpilip tekrar faktoriyele esitlenir.

1) Kullanicidan veriler alinir
2) Faktoriyel hesabi yapilir
3) Sonuc ekrana basilir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int sayi;
	int faktoriyel=1;
	//1
	printf("Faktoriyelini almak istediginiz sayiyi giriniz...\n");
	scanf("%d",&sayi);
	
	int deger = sayi;
	//2
	while(sayi > 0){
		faktoriyel *= sayi;
		sayi--;
	}
	//3
	printf("%d! = %d\n",deger,faktoriyel);
	
	return 0;
}
