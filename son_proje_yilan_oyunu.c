#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

int saha[80][80]={0};
int kuyruksutun[300];
int kuyruksatir[300];
int k,l;

// Imleci belirli konuma goturen fonksiyon
void gotoxy(short x, short y){
	HANDLE hConsoleOutput;
	COORD Cursor_Pos = {x-1, y-1};

	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}
// Oyun cerceve siniri belirten fonksiyon
void cerceve (int x1, int y1, int x2, int y2, int tip){
	int i;
	for(i=x1;i<=x2;i++){
		saha[i][y1]=tip;
		saha[i][y2]=tip;
	}
	for(i=y1;i<=y2;i++){
		saha[x1][i]=tip;
		saha[x2][i]=tip;
	}
}
// Cerceve cevresini cizdirme fonksiyonu
void ekranyaz(){
	int x,y;
	for(x=0;x<80;x++){
		for(y=0;y<23;y++){
			gotoxy(x+1,y+1);
			if(saha[x][y]==2){
				printf("%c",176);
			}
			else printf(" ");
		}
	}
}

int randomata(){
	srand(time(NULL));
	k=4+rand()%65;
	l=4+rand()%15;
}

void main(){
	tekrar:
	cerceve(0,0,79,22,2);
	ekranyaz();
	randomata();

	int sx = 40;
	int sy = 12;
	unsigned char tus;
	int dx=0, dy=0, a=0, i;
	
	
	// Yon tuslarininin atamasi
	do{
		gotoxy(82,2);printf("Puan: %d",a);
		if(kbhit()){	// Klavyeden bir tusa basildiysa
			tus=_getch();	// Basilan tusu kaydettik
			if(tus==224){	// Basilan tus yon tusuysa
				tus=_getch();
				switch(tus){
					case 72: dy=-1; dx=0 ; break;	// Yukari tusuna basildiysa
					case 80: dy= 1; dx=0 ; break;	// Asagi tusuna basildiysa
					case 77: dy= 0; dx=1 ; break;	// Sol tusuna basildiysa
					case 75: dy= 0; dx=-1;			// Sag tusuna basildiysa
				}
			}
		}
		// Konumu guncelleme
		sx=sx+dx;
		sy=sy+dy;
		// Cerceve disina cikma durumlari
		if(sx>78) sx=2;
		if(sx<2)  sx=78;
		if(sy>22) sy=2;
		if(sy<2)  sy=22;
		
		kuyruksutun[0]=sx;
		kuyruksatir[0]=sy;

		// Engellenen durumlar
		for(i=1;i<=a;i++){
			if(sx==kuyruksutun[i] && sy==kuyruksatir[i]){
				gotoxy(33,9); printf("**************\a");
				gotoxy(33,10);printf("*  YANDINIZ  *");
				gotoxy(33,11);printf("**************");
				gotoxy(33,12);printf("   Puan: %d",a);
				gotoxy(2,21); printf("Tekrar oynamak icin bir tusa basiniz...");
				gotoxy(2,22); printf("(Oyundan cikmak icin ESC'ye basiniz)");
				tus=_getch();
				if (tus==27){
					return 0;
				}
				else goto tekrar;
			}
		}
		
		gotoxy(sx,sy);printf("@"); // yilanin kafasi ekrana bastiriliyor
		for(i=1;i<=a;i++){
			gotoxy(kuyruksutun[i],kuyruksatir[i]);printf("O"); // Yem yedikce yilanin kuyrugu isleniyor.
		}
		
		// Yem
		if((sx==k && sy==l)){
			randomata();
			a++; // Kuyruk uzunlugu
		}
		gotoxy(k,l);printf("*"); // Yem ekrana bastiriliyor
		
		// Yeni tusa basiltiginda eski verilerin silinme islemi gerceklestiriliyor.
		Sleep(60);
		gotoxy(sx,sy);printf("  ");
		for(i=1;i<=a;i++){
			gotoxy(kuyruksutun[i],kuyruksatir[i]);printf(" ");
		}
		// Yilan ilerledikce kuyrugunun ayni izden takip etmesi saglaniyor
		for(i=a;i>0;i--){
			kuyruksutun[i]=kuyruksutun[i-1];
			kuyruksatir[i]=kuyruksatir[i-1];
		}			
	}while(1);
}
