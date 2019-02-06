#include <iostream>
#include <math.h>
/*
https://projecteuler.net/problem=10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
----------------------------------
10'dan küçük asal sayıların toplamı 2 + 3 + 5 + 7 = 17'dir.
İki milyondan küçük asal sayıların toplamı kaçtır?
*/
using namespace std;
//soru 7'deki asal sayı fonksiyonunu burada da kullandım
bool asal_mi(int sayi)
{
    if (sayi<=3)
        return true;
    else if (sayi%2==0 || sayi%3==0)
        return false;
	for(int i=5;i<sqrt(sayi)+1;i+=6)
		if(sayi%i==0 || sayi%(i+2)==0)
			return false;
	return true;
}

int main()
{
  unsigned long long int i,toplam=0;
  for(i=2;i<2000000;i++)
  {
    if(asal_mi(i))
      toplam+=i;
  }
  cout << "Toplam : " << toplam;
}
