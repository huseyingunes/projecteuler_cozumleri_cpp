#include <iostream>
#include <string>
/*
https://projecteuler.net/problem=14
The following iterative sequence is defined for the set of positive integers:
n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
--------------------------------------------------------
Aşağıdaki yinelemeli dizi, pozitif tamsayılar için tanımlanmıştır:

n → n / 2 (n, çift)
n → 3n + 1 (n, tek)

Yukarıdaki kuralı kullanarak ve 13 ile başlayarak, aşağıdaki şekilde ilerliyor:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
Bu dizinin (13'ten başladı ve 1'de bitti) 10 terim içerdiği görülebilir.
Henüz ispatlanmamasına rağmen (Collatz Problemi), tüm başlangıç ​​numaralarının 1'de bittiği düşünülüyor.

Bir milyonun altındaki hangi başlangıç ​​sayısı en uzun zinciri üretiyor?

NOT: Zincir başladıktan sonra terimlerin bir milyonun üzerine çıkmasına izin verilir.
*/
using namespace std;

int kac_tane_eleman_var(int sayi)
{
  int sayac=0;
  long long gercek_sayi = sayi;
  do
  {
    if (gercek_sayi%2==0)
      gercek_sayi=gercek_sayi/2;
    else
      gercek_sayi=gercek_sayi*3+1;
    sayac++;
    if(gercek_sayi==1)
      return sayac;
  }while(1);
  return sayac;
}


int main()
{
  int i,islem=0,sayi,ara_islem=0;
  for (i=999168; i>1; i--) // 0 a kadar kontrol etmeye gerek yok...
  {
    ara_islem=kac_tane_eleman_var(i);
    if(islem<ara_islem)
    {
      islem=ara_islem;
      sayi=i;
    }
  }
  cout << sayi  << endl;
}
