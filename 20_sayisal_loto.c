/*
1) 1-49 arasinda rastgele bir sayi cekilecek
2) Bu sayinin daha once cekilip cekilmedigi loto dizisindeki seri elemani ile kontrol edilir
   (0 ise daha once cekilmemis, 1 ise daha once cekilmis demektir)
   Eger cekildiyse yeni sayi uretilir
3) Cekilen sayi loto dizisine kaydedilir (o sayiya karsilik gelen seri elemani 1 yapilir)
4) Sayi ekrana bastirilir
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	srand(time(NULL)); //rand() fonksiyonunu zamana baglar ki hep ayni sonucu vermesin
	int rastgelesayi,i;
	int loto[49]={0};//49 sayi olan bir seri ayarlanir. Her eleman 0 durumundadir
	//1
	for(i=0;i<6;i++){
		rastgelesayi = 1+rand()%49;
		//2
		while(loto[rastgelesayi-1]==1){ //eger cekilen sayi loto dizisinde 1 ise daha once cekilmis demektir ve yeniden cekilir
			rastgelesayi = 1+rand()%49;
		}
		//3
		loto[rastgelesayi-1]=1;//loto dizisinde cekilen sayiya karsilik gelen ifade 1 yapilir
		//4
		printf("%d  ",rastgelesayi);
	}

	return 0;
}
