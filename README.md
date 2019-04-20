# C-Programlama
Kısa bilgilendirmeler ve örnekleri içermektedir.

##### İçerik  
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

*`break`*, yapıdan (bu bölüm için switch-case yapısı) çıkılmasını sağlar. Eğer kullanılmamışsa o durum ve sonrasındaki durumların hepsi açık Kabul edilir ve hepsindeki işlemler yapılır.

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

<a name="5"/>

## 5. Fonksiyonlar
*24 ve 25. örnekler bu bölümle ilgilidir.*

<a name="6"/>

## 6. İşaretçiler (Pointers)
*26. örnek bu bölümle ilgilidir.*

<a name="7"/>

## 7. Yapılar (Structures)
*27. örnek bu bölümle ilgilidir.*

<a name="8"/>

## 8. Dosya İşlemleri



