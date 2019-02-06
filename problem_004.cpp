#include <iostream>
/*
https://projecteuler.net/problem=4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
------------------------------------
Palindromik bir sayı iki taraftanda aynı şekilde okunan sayıdır. (8008, 923329, 777777)
İki basamaklı iki sayının ürününden yapılan en büyük palindrom 9009 = 91 × 99'dur.
Üç basamaklı iki sayının çarpımı ile yapılan en büyük palindromu bulun.
*/
using namespace std;

bool palindrom_mu(unsigned long int s)
{
    if ((s/100000==s%10) && ((s/10000)%10==(s%100)/10) && ((s/1000)%10==(s%1000)/100))
        return true;
    else
        return false;
}

int main()
{
    int palindrom_sayi=0;
    for (int i=100;i<1000;i++)
        for(int s=i;s<1000;s++)
            if(palindrom_mu(i*s))
                if(palindrom_sayi<(i*s))
                    palindrom_sayi = i*s;
    cout << palindrom_sayi << endl;
    return 0;
}
