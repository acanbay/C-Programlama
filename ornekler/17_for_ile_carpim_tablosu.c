/*
i ve j gibi iki degisken tanimlanir
i degiskeni 1-10 arasinda donguye sokulur,
j de i dongusunun icinde 1-10 arasi donguye sokulur.
Dongu icinde ixj degerleri hesaplanir.
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int i,j;

	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			printf("%d x %d = %d\t",i,j,i*j);
		}
		printf("\n");
	}

	return 0;
}
