/*
M1'in satir sayisi M2'nin sutun sayisina esit ve M3 bu matrislerin carpimi olmak uzere:
M3[i][j]=M1[i][k]*M2[k][j] (k=1,2,...)

1) Islem yapilacak 2 matrisin satir ve sutun sayilari istenir
   a) ilk matrisin sutun sayisi icinci matrisin satir sayisina esit degilse program sonlandirilir
2) Matrislerin elemanlari kullanicidan alinir ve matrisler ekrana bastirilir
3) matris carpimi gerceklestirilir ve sonuc ekrana basilir
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int satir1, sutun1, satir2, sutun2, i, j, k;
    float deger;
    //1
    printf("1. matrisin sirasiyla satir ve sutun sayilarini giriniz...\n");
	scanf("%d%d",&satir1,&sutun1);
	printf("2. matrisin sirasiyla satir ve sutun sayilarini giriniz...\n");
	scanf("%d%d",&satir2,&sutun2);
    //1.a
    if(sutun1 != satir2){
   		printf("Matrislerin boyutlari uyumsuz. Islem iptal edildi.");
    	return 0;
    }
    system("CLS"); //ekrani temizler
	//2
	printf("1. Matrisin bilgileri\n");
	float matris1[satir1][sutun1];
    for(i = 0; i < satir1; i++){
        for(j = 0; j < sutun1; j++){
            printf("%d. satir %d. sutun: ",i+1,j+1);
            scanf("%f", &matris1[i][j]);
            }
        }
	printf("\n******************************\n");
	printf("1. Matris:\n");
    for(i = 0; i < satir1; i++){
        for(j = 0; j < sutun1; j++){
            printf("%.2f\t", matris1[i][j]);
            }
        printf("\n");
        }
    printf("******************************\n\n");
    
    printf("2. Matrisin bilgileri\n");
    float matris2[satir2][sutun2];
    for(i = 0; i < satir2; i++){
        for(j = 0; j < sutun2; j++){
            printf("%d. satir %d. sutun: ",i+1,j+1);
            scanf("%f", &matris2[i][j]);
            }
        }
	printf("\n******************************\n");
	printf("2. Matris:\n");
    for(i = 0; i < satir2; i++){
        for(j = 0; j < sutun2; j++){
            printf("%.2f\t", matris2[i][j]);
            }
        printf("\n");
        }
	printf("\n******************************\n");
	//3
    float sonucMatrisi[satir1][sutun2];
    for(i = 0; i<satir1; i++){
        for(j = 0; j<sutun2; j++){
            deger = 0;
            for(k = 0; k<sutun1; k++){
                deger += matris1[i][k]*matris2[k][j];
                }       
            sonucMatrisi[i][j] = deger;
            }
    }
	printf("\n******************************\n");
    printf("carpim matrisi:\n");
    for(i = 0; i < satir1; i++){
        for(j = 0; j < sutun2; j++){
            printf("%.2f\t", sonucMatrisi[i][j]);
            }
        printf("\n");
        }
	printf("\n******************************\n");
	
    return 0;
}
