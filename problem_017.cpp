#include <iostream>
/*
https://projecteuler.net/problem=17
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?
NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23
letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.
------------------------------------
1 den 1000 e kadar sayıların ingilizce okunuşlarının toplam karakter sayısı kaçtır?
*/
using namespace std;
int uzunluk(string sayi)
{
  return sayi.length();
}

int main()
{
  string birler[] = {"","one","two","three","four","five","six","seven","eight","nine","ten",
  "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
  string onlar[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

  int toplam_harf_sayisi=0;
  for (int i=1;i<=1000;i++)
  {
    if(i<20)
      toplam_harf_sayisi+=uzunluk(birler[i]);
    else if(i<100)
      toplam_harf_sayisi+=uzunluk(onlar[i/10] + (i%10!=0? birler[i%10]:""));
    else if(i<1000)
    {
      string sayi=birler[i/100]+"hundred";
      if(i%100!=0)
        sayi+="and"; // and ekliyoruz, "one hundred and ten" vb.
      if((i%100)<20)
        sayi+=birler[(i%100)];
      else if((i%100)<100)
        sayi+=(onlar[(i%100)/10] + ((i%100)%10!=0? birler[(i%100)%10]:""));
      toplam_harf_sayisi+=uzunluk(sayi);
    }
  }

  toplam_harf_sayisi+=11; // one thousand ekleniyor
  cout << toplam_harf_sayisi << endl;
}
