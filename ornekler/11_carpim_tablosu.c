/*
i degiskeni tnaimlanir ve while icerisinde gerekli isleler girilip ekrana bastirilir.
while sonunda i bir arttirilir ve basa donulur (i<10 oldugu surece)

1) Tablo ismi yazdirilir
2) While dongusu olusturulur ve tablo ekrana bastirilir

Burada 2 adet while dongusu kullanilmasinin sebebi ilk 5 tabloyu ustte,
sonraki 5 tabloyu altta bastirmaktir.
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i=1;
	//1
	printf("\t\t\t      **************\n");
	printf("\t\t\t      Carpim Tablosu\n");
	printf("\t\t\t      **************\n\n");
	//2
	while(i<11){
		printf("1 x %d = %d\t",i,i);
		printf("2 x %d = %d\t",i,2*i);
		printf("3 x %d = %d\t",i,3*i);
		printf("4 x %d = %d\t",i,4*i);
		printf("5 x %d = %d\t",i,5*i);
		printf("\n");
		i++;
	}
	i=1;
	printf("\n");
	while(i<11){
		printf("6 x %d = %d\t",i,6*i);
		printf("7 x %d = %d\t",i,7*i);
		printf("8 x %d = %d\t",i,8*i);
		printf("9 x %d = %d\t",i,9*i);
		printf("10 x %d = %d\t",i,10*i);
		printf("\n");
		i++;
	}
	
	return 0;
}
