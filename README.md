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

`%` operatörü modül'ü bulan operatördür. `A % B` işlemi A'nın B'ye bölümünden kalanı verir.

`**` operatörü üs alan operatördür. `A ** B` işlemi A üssü B olur ve A nın B tane A ile çarpımını verir.

Özel matematiksel fonksiyonların kullanımı için `math.h` kütüphanesinin çağırılması gerekmektedir. bu kütüphane çağırıldıktan sonra `sqrt()` fonksiyonu ile karekök alma işlemleri ( `sqrt(A)` şeklinde kullanılır ) ve `pow()` fonksiyonu ile üs alma işlemleri ( `pow(A,B)` ) şeklinde kullanılır ve A nın B üssü iişlemini yapar) gibi fonksiyonlar kullanılabilir.

***Ekrana yazı yazdırma ve kullanıcıdan veri alma***

<a name="2"/>
## 2 Kontrol Yapıları
<a name="3"/>
## 3 Döngüler
<a name="4"/>
## 4 Diziler
<a name="5"/>
## 5 Fonksiyonlar
<a name="6"/>
## 6 İşaretçiler (Pointers)
<a name="7"/>
## 7 Yapılar (Structures)
<a name="8"/>
## 8 Dosya İşlemleri


