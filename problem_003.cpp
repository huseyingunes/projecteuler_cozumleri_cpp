#include <iostream>
#include <math.h>
/*

The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
--------------------------
13195 sayısının asal çarpanları 5,7,13 ve 29.
O zaman 600851475143 sayısının en büyük asal çarpanı nedir?
*/
#define buyuk_sayi 600851475143
using namespace std;
int aranan_sayi;
bool asal_mi(int a)
{
    for (int s=3;s<sqrt(a);s+=2) // çift sayıları atlıyoruz
    {
        if(a%s==0)
        return false; // herhangi  bir sayıya bölündüyse asal değil
    }
    return true; // hiçbir sayıya bölünmediğine göre asal
}

int main()
{
    for (int i=3;i<=sqrt(buyuk_sayi);i+=2) // çift sayıları atlayarak ilerliyoruz.
    // Ayrıca herhangi bir sayı karekökünden büyük bir sayıya bölünemeyeceği için oraya kadar ilerlememiz yeterli
    {
        if (buyuk_sayi%i==0)
        {
            if(asal_mi(i))
                aranan_sayi=i;
        }
    }
    cout << "En buyuk asal carpan : " << aranan_sayi << endl;
    return 0;
}
