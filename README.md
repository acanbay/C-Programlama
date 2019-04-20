# C-Programlama
Kısa bilgilendirmeler ve örnekleri içermektedir.
 
[1. Giriş](#1)  
[2. Kontrol Yapıları](#2)  
[3. Döngüler](#3)  
[4. Diziler](#4)  
[5. Fonksiyonlar](#5)  
[6. İşaretçiler (Pointers)](#6)   
[7. Yapılar (Structures)](#7)   
[8. Dosya İşlemleri](#8)   

<a name="1"/>

## 1. Giriş
*1, 2, 3 ve 4. örnekler bu bölümle ilgilidir.*


C, genel amaçlı bir programlama dilidir ve 1972 yılında Dennis Ritchie ve Brien Kernighan tarafından Bell Laboratuvarları’nda geliştirilmiştir. Ritchie ve Kernighan “The C Programming Language” adlı kitaplarında bu dilin geniş bir anlatımı yapmış ve kullanımını açıklamışlardır.

**Genel C kod yapısı**
```C
#include <kutuphane.h>
int main(){
 ...
 return 0;                
}
```
burada
`#include`,
kodumuzda kullandığımız hazır komutların kütüphanelerini çağırmamızı sağlar.
`
int main(){...}
 `
kısmı ana kodumuzu barındıran bölümdür. Program çalıştırıldığında ilk olarak bu bölüm çalışır. 
`
return 0;
 `
ise 0 değeri döndüren bir koddur. Böylelikle programın sonlandığını belirtir. 

***İlk program***
```C
/* Ekrana 
"Merhaba Dünya"
yazısı bastırılacak */
#include <stdio.h> //Standard girdi çıktı kütüphanesi ekleniyor
#include <locale.h> //Dil kütüphanesi
int main()
{
    setlocale(LC_ALL,"Turkish");  //Türkçe karakter desteği için girilen komut
    printf("Merhaba Dünya!");   //Yazdırma komutu
    return 0; //Programın bittiğini belirtir
}
```

/* ile başlayıp */ ile biten bölümlere yorum bloğu denir. // ile başlıyan bölümler ise yorum satırlarıdır. Yorum blokları içerisindeki her satır ve paragrafı yorum olarak belirtir, yorum satırı ise sadece satırda tanımlıdır ve alt satıra geçildiğinde kendiliğinden yorum dışına çıkar. Bu bölümlerde yazdıklarınız program tarafından görülmezler. Başkalarının da programı anlayabilmesi için eklenirler.

Türkçe karakterlerin kullanılması için locale.h kütüphanesi yüklenip içerisinden Türkçe desteği çekilmelidir. Kodlarınızda Türkçe karakter kullanmak isterseniz bu örnekteki gibi kullanabilirsiniz.


**Kod derleme ve çalıştırma**

C kodlarını terminalden derlemek için:
```
gcc -o program programismi.c
```
komutu kullanılır. Burada "program" ve "programismi" sadece göstermek için kullanılmış isimlerdir. .c uzantılı dosyanızın adı ve sizin programa vermek istediğiniz ada göre değiştirilebilirler.

Daha sonra derlenen program,
```
./program
```
komutu ile çalıştırılır.

**Değişkenler**

C dilinde kullanılan önemli değişkenler aşağıdaki gibidir:
```
int   : tamsayı       (4 byte)
double: kesirli sayı  (8 byte)
float : kesirli sayı  (4 byte)
char  : harf          (1 byte)
```
ve

```C
int a=5;
double b=2.4;
float c=7.3;
char d='A';
```

şeklinde tanımlanırlar. Bu tanımlamlardan sonra a, b, c veya d her çağırıldıklarında karşılarındaki değerleri taşıyan değişkenler olarak gelirler.


**Tip Dönüştürme**

Bir değişkenin tipinin başka bir değişken tipine çevrilmesi işlemidir. Örneğin karakter tipli bir değişken tanımlandıktan sonra tamsayı tipine çevrilebilir. Bu durumda içerideki karakter bilgisi kaybolup yerine o karakterin ASCII tablosundaki sayısal değeri işlenecektir. Yine kesirli sayı tipli bir veri tamsayı tipine dönüştürülebilir. Bu durumda ise sayının sadece tamsayı olan kısmı alınıp diğerleri alınmayacaktır.

Kod içerisinde

```C
char c ='A'
double d = 8.987;
int a = (int)c;
int b = (int)d;
```
şeklinde tnaımlanırlar.

***Matematiksel işlemler***

+,-,*,/ operatörleri sırasıyla toplama, çıkarma,çarpma ve bölme işlemlerini gerçekleştirirler. Kod içeriisnde ise

```C
int a=24;
int b=4;
int toplama, cikarma, carpma, bolme;

toplama = a + b;
cikarma = a - b;
carpma = a * b;
bolme = a / b;
```
Şeklinde kullanılırlar.


`a++` : a'yı 1 arttırır (`a = a + 1` ile aynı anlamdadır)    
`a--`	: a'yı 1 azaltır (`a = a - 1` ile aynı anlamdadır)    
`a += 5`	: a'yı 5 arttırır (`a = a + 5` ile aynı anlamdadır)    
`a -= 6` : a'yı 6 eksiltir (`a = a - 6` ile aynı anlamdadır.)    
`a *= 3` : a'yı 3 ile çarpar (`a = a * 3` ile aynı anlamdadır.)    
`a /= 4` : a'yı 4 e böler (`a = a / 4` ile aynı anlamdadır.)    


`%` operatörü modül'ü bulan operatördür. `A % B` işlemi A'nın B'ye bölümünden kalanı verir.

`**` operatörü üs alan operatördür. `A ** B` işlemi A üssü B olur ve A nın B tane A ile çarpımını verir.

Özel matematiksel fonksiyonların kullanımı için `math.h` kütüphanesinin çağırılması gerekmektedir. bu kütüphane çağırıldıktan sonra `sqrt()` fonksiyonu ile karekök alma işlemleri (`sqrt(A)` şeklinde kullanılır) ve `pow()` fonksiyonu ile üs alma işlemleri (`pow(A,B)`) şeklinde kullanılır ve A nın B üssü iişlemini yapar) gibi fonksiyonlar kullanılabilir.

***Ekrana yazı yazdırma ve kullanıcıdan veri alma***     

Ekrana yazı yazdırmak için `printF()` fonksiyonu, kullanıcıdan veri almak için ise `scanf()` fonksiyonu kullanılır.

<a name="printf"/>
**`printf()`:**

Sadece ekrana yazı bastırılmak istendiğinden `printf` fonksiyonu,
```C
printf("Yazılmak istenen");
```
şeklinde kullanılabilir. Ancak çoğu zaman ekrana bazı değişkenleri de yazdırmak isteriz. Bunun için ise verileri belirli formatlama yöntemleri ile kullanmamız gerekir. Örnek olarak eğer integer bir a değerini bastırmak istiyorsak:

```C
printf("a değeri: %d",a);
```
şeklinde tanımlamamız gerekir. Burara `%d` ile gösterilen kısım, `printf()` fonksiyonuna ekrana bastırılacak `a` değişkeninin yerini ve formatını belirtir. Integer değerler için `%d` olarak kullanılır. Diğer formatların kullanımı da aşağıda verilmiştir.

```
int   : %d
double: %lf
float : %f
char  : %c
```

Eğer kesirli bir sayıyı ekrana bastırırken virgülden sonra sadece 2 basamak almak istiyorsak:

```C
printf("a değeri: %.2f",a);
```
gibi bir kullanım yapabiliriz. Gelecek değişkenin formatını belirttiğimiz bölümde nokta koyup sonra kaçıncı basamağa gitmek istediğimizi belirtebiliriz.

<a name="scanf"/>
**`scanf()`:**

Bu fonksiyon kullanılırken önce tırnak işareti içerisinde alınacak değişkenin formatı belirtilir. Daha sonra ise `&` kullanılarak değişkenin hangi adreste saklanacağı bilgisayara tanımlanır (Pointers bölümünde ayrıntısı verilecektir).

```C
scanf("%d",&a);
```

<a name="2"/>

## 2. Kontrol Yapıları

*5, 6, 7, 8, 9, ve 10. örnekler bu bölümle ilgilidir.*

`==`		: eşittir    
`!=`		: eşit değildir    
`||`		: veya    
`&&`		: ve    
`!(ifade)`	: ifadenin değili  

**if, if else, else**

`if` yapısı, istediği koşullar sağlandığı sürece içindeki işlemlerin yapıldığı kalıplardan oluşur. Eğer koşul sağlanmıyorsa yapıya girilmez ve o bölüm atlanır.

```C
if(koşul1){
    yapılacak işlemler;
}
else if(koşul2){
    yapılacak işlemler;
}
else if(koşul3){
    yapılacak işlemler;
}
. . .
else(koşulN){
    yapılacak işlemler;
}
```

şeklinde kullanılır.

**switch-case**

`switch-case` yapısı seçenekler üzerinden çalışır. Her seçenek için farklı işlemler atanır ve hangi seçenek gelmişse onun işlemleri yapılır.

```C
switch (secenekler){
    case secenek1: 
        yapılacak işlemler ; 
        break;
    case secenek2: 
        yapılacak işlemler ; 
        break;
	. . .
    default: yapılacak işlemler;
}
```

*`break`*, yapıdan çıkılmasını sağlar. 

*`continue`*, ifade sağlanıyorsa döngünün başına gönderir. 

*`goto`*, önceden tanımlanmış bir noktaya sıçramayı sağlar.

<a name="3"/>

## 3. Döngüler

*11, 12, 13, 14, 15, 16, 17 ve 18. örnekler bu bölümle ilgilidir.*

**while**

`while`, parantez içerisindeki ifade sağlanıyorsa içerisindeki işlemleri gerçekleştirir. Daha sonra tekrar başa döner ve işlemlerden sonra da ifadenin sağlanıp sağlanmadığını test eder. Eğer hala sağlanıyorsa tekrar işlemleri yapar. İşlemler ifadeyi bozana kadar döngü bu şekilde devam eder.


```C
while(ifade){
    yapılacak işlemler;
}
```
**do-while**

`do-while` döngüsünde önce içerisindeki işlemler yapılır ve işlemler bitirdikten sonra while içerisindeki koşul test edilir. Koşul sağlanıyorsa tekrar do’ya döner, aksi halde döngüden çıkar. 

```C
do{
    yapılacak işlemler;
}while(ifade);
```

**for**

`for` döngüsü de while gibi içindeki şart sağlandığı sürece döngüye devam eder. Şart bozulduğunda döngüden çıkılır.
while’den farklı olarak kesin bir ifadeyi test etmez ve değişken bir ifade kullanır. Kendi içinde işlemler yaparak döngü işlemlerine veri verebilir.


```C
for(i=0;i<#;i++){
    yapılacak işlemler;
}
```

<a name="4"/>

## 4. Diziler

*19, 20, 21, 22 ve 23. örnekler bu bölümle ilgilidir.*

Diziler aslında içerisinde birden fazla değer tutan değişken tipleridir. 

```C
int dizi[4] = {1,2,3,4};
```
şeklinde tamsayı dizilri oluşturulabilir. Daha sonra içerisindeki değerlere ulaşılmak indislerden yararlanılır. Örneğin bu dizideki 1 değeri dizinin 0. değişkenidir (diziler 0'dan başlar) ve `dizi[0]` şeklinde kullanılır. Yine dizinin bir değerini değiştirmek istersek de benzer şekilde indislerden yararlanırız. örneğin 3. değerini 5 yapmak istersek `dizi[3] = 5` şeklinde değer atarız.

Boş bir dizi oluşturmak için ise `int dizi[];` şeklinde tanım yapılabilir.

Not: `int` ifadesi göstermek için kullanılmıştır. Yerine diğer sayı tipleri de gelebilir.

**Karakter dizileri**

Karakter dizileri de benzer şekilde tanımlanır. Sadece küçük bir farkları vardır.

```C
char dizi[4] = {'a','l','i'};
```
Görüldüğü gibi karakter dizilerinde içerideki eleman sayısından bir fazla sayıda indis belirlenir. Bunun nedeni RAM'in karakter dizisinin bittiğini anlaması için dizi sonuna `\0` diye bir elemanın atılmasıdır. Bu nedenle dizi bir eleman fazla olur. 

Karakter dizilerinin elemanlarını tanımlamak için,

```C
char dizi[4]="ali";
```

şeklinde daha kolay bir yol da kullanılabilir. 

Karakter dizileri string diye de adlandırılır. Stringleri scanf fonksiyonu ile alabilmek için `%s` formatı kullanılır. Böylelikle eleman eleman değil de bütün olarak alınabilirler.

```C
scanf("%s",(char*)&dizi);
```
<a name="gets"/>
Karakter dizilerini kullanıcıdan alırken kullanılacak daha iyi bir yöntem de mevcuttur. Bu yöntem `gets()` fonksiyonudur ve 

```C
gets(dizi);
```
<a name="puts"/>
şeklinde yine karakter dizisini ekrana basmak için daha kolay bir yol olan `puts()`

```C
puts(dizi);
```
şeklinde kullanılır.

**Çok Boyutlu Diziler**

```C
int dizi[#1][#2]. . .;
```

şeklinde tanımlanan dizilerdir (#'lar yerine sayı gelecektir). #1 dizi içinde kaç bölüm olduğunu (matrislerde sutun sayısını), #2 ise her bölümün elemanını (sayır sayısını) belirtir. Ulaşılmak istenen değer için 2 indis kullanılır. Bir örnekle gösterecek olursak,

```C
int dizi[3][2] = {{1,2},{3,4},{5,6}};
```
Şeklinde tanımlanan dizide 5 sayısı `dizi[2][0]` elemanı olur. 

<a name="5"/>

## 5. Fonksiyonlar
*24 ve 25. örnekler bu bölümle ilgilidir.*

`main()` dışında tanımlanan ve `main()` içerisinde çağırıldığında bi takım işlemler ve sonuç ile gelen yapılardır.

**void fonksiyonu**

Boş değer döndüren fonksiyonlardır. Fonksiyon sonucu bir değere dönmez ve sadece içindeki işlemler yapılır.

```C
void fonksiyon(){
   yapılacaklar;
}
```
şeklinde oluşturulur.

**Değer döndüren fonksiyonlar**

Değer döndüren fonksiyonlar dönecek değere bağlı bir tiple tanımlanırlar. 

Örneğin

```C
int carpma(int x, int y){
   return x*y;
 }
```
fonksiyonu 2 değer ile çağırılır ve çıktı olarak değerlerin çarpımınu döndürür.

**Recursive fonksiyonlar**

İçerisinde kendisini çağıran fonksiyonlardır. 

Örnek:

```C
int faktoriyel(int sayi){
   if(sayi<=1){
      return 1;
   }
   else{
      return sayi*faktoriyel(sayi-1);
   }
}
```
Burada faktöriyel kendisine gelen sayıyı bir azaltarak tekrar kendi içine göndermektedir. Böylelikle sayı 1 olana kadar her bir azaltılıp çarpılarak sayının faktöriyeline ulaşmaktadır.

**Standart kütüphane fonksiyonları**

String'ler için işlemleri kolaylaştıran fonksiyonlardır.

**`strlen(string)`:** içindeki string'in boyutunu verir.

**`strcpy(string1,string2)`:** string2'yi string1 içine kopyalar.

**`strncpy(string1,string2,#)`:** string2'yi #. elemandan itibaren string2'ye kopyalar.

**`strcat(string1,string2)`:** string1'in ardına string2'yi ekler.

**`strrev(string)`:** string'in harf sırasına göre tersini alır.

**`strcmp(string1,string2)`:** iki string'i karşılaştırır. eğer eşitlerse `0`, string1 alfabetik olarak string2'den büyükse `<0`, string2 alfabetik olarak string1'den büyükse `>0` değeri verir.

<a name="6"/>

## 6. İşaretçiler (Pointers)
*26. örnek bu bölümle ilgilidir.*

Bir pointer ana bellekte bir adres belirtir ve `*` ile tanımlanır.

Örnek:

```C
int sayi = 5;
int *adres;
adres = sayi;
```

`adres` değişkeni bilgi olarak `sayi` değişkeninin RAM'deki yerini alır bu nedenle `sayi`'nın kendisi gibi 5'e eşit değildir.	
5'e eşit olan RAM'de o adreste saklanan veriyi alan `*adres` ifadesi olur.

**Dinamik bellek yönetimi**

**`malloc`**

RAM'de yer ayırma işlemi yapar (ayrılan yerdeki eski veriyi silmez).

```C
int *alan = malloc(miktar*size);
```

şeklinde alınır. `size` içeri girilecek değişkenin RAM'de kaplayacağı alanı (Örneğin int için 4 byte), `miktar` ise o veri tipinden kaç tane alınacağını belirtir.

**`calloc`**

RAM'de yer ayırma işlemi yapar (ayrılan yerdeki eski veriyi siler).

```C
int *alan = calloc(miktar*size);
```

**`realloc`**

Ayrılan alanı yeniden boyurlandırır.

```C
alan = realloc(alan,miktar*size);
```

**`free`**

Ayrılan alanı RAM'e geri verir.

```C
free(alan);
```

<a name="7"/>

## 7. Yapılar (Structures)
*27. örnek bu bölümle ilgilidir.*

Birbiri ile ilişkili olan değerlerin bir arada turulmasını sağlarlar. `main()` dışarısında tanımlanırlar (fonksiyonlar gibi). Genel yazılımı

```C
struct yapi{
  . . .
}elemanlar;
```
şeklindedir. `elemanlar` bölümünde yapı elemanları tanımlanırken öntanımlı (default) değerleri de atanabilir. `. . .` olan bölümde ise yapının özellikleri (mesela insan isimli bir yapı için yaş, cinsiyet, boy, kilo... gibi özellikler) belirlenir. 

Yapı tanımlandıktan sonra main içerisinde elemanlarının özellikleri

```C
eleman.ozellik = ##;
```
şeklinde tanımlanabilir.


<a name="8"/>

## 8. Dosya İşlemleri

**Dosya Açma ve Kapama**

```C
FILE *dosya;
dosya = fopen("dosya_yolu/dosya.txt","MOD");
...
fclose(dosya);
```
`FILE *dosya`, bir dosya adlı bir pointer atanıp dosya `fopen()` ile açılır. Ardından işlemler bitince `fclose()` ile açılmış olan dosya kapanır.

`MOD` ile verilen yer dosyanın açılma modudur ve bu modlar altta listelenmişdir.

`r`: sadece okuma

`w`: sadece yazma (içeriği silerek başlar)

`a`: ekleme modu

**Dosyaya yazma işlemleri**

Dosya yazımında iki farklı yöntem vardır. Bunlardan ilki `fprintf()` fonksiyonudur. Bu fonksiyon [`printf()`](#printf) ile aynı şekilde tanımlanır. Tek farkı ekrana değil de dosyaya yazdırmasıdır.

Diğer bir yol ise karakter yazımında kullanılan `fputc()` fonksiyonudur. Tek bir karakter yazmaya yarar.

```C
fputc('A',dosya);
```

`fputc()` fonksiyonu `fputs()` şeklinde kullanılırsa [`puts()`](#puts)'un dosya işlemlerinde kullanılan halini verir.

**Dosya okuma işlemleri**

Doya okumada da yazmada olduğu gibi iki yöntem mevcuttur.

İlki `fscanf()` fonksiyonudur. Bu fonksiyon [`scanf()`](#scanf) ile aynı şekilde tanımlanır ve dosyadan veri almaya yarar.

Diğer yol ise karakter alırken kullanılan `fgetc()` fonksiyonudur. Tek bir karakter almaya yarar.

```C
fgetc(dosya);
```

`fgetc()` fonksiyonu `fgets()` şeklinde kullanılırsa [`gets()`](#gets)'in dosya işlemlerinde kullanılan halini verir.

**Dosya kontrol işlemi**

```C
while(karakter!=EOF){
  ...
}
```
kontrolü dosyanın sonuna gelinmediği sürece (EOF= end of file, dosya sonu) işlemlerin yapılmasını sağlar.

____________
