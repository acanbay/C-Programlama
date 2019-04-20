/*
Fibonacci serisinde serideki ardarda gelen iki sayi toplanarak serinin bir sonraki degerini belirler
1 1 2 3 5 8 13...

1) Serinin kacinci elemaninin gorulmek istedigi sorulur
2) Serinin ilk iki elemani basilir
3) Serinin kalan elemanlari (ilk 2 elemandan sonrasi) hesaplanir ve ekrana basilir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	double sayi1=1, sayi2=1, eleman, toplam, i;
	//1
	printf("Serinin kacinci elemanina kadar gitmek istiyorsunuz?\n\n");
	scanf("%lf",&eleman);
	//2
	printf("\n%.lf\n",sayi1);
	printf("%.lf\n",sayi2);
	//3
	for (i=2;i<eleman;i++){
		toplam = sayi1+sayi2;
		printf("%.lf\n",toplam);
		sayi1=sayi2;
		sayi2=toplam;
	}

	return 0;
}
