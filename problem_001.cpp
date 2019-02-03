#include <iostream>

/*
https://projecteuler.net/problem=1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
--------------------------------------------------------
10'un altındaki 3 veya 5'in katları olan tüm doğal sayıları listelersek, 3, 5, 6 ve 9 sayısını elde ederiz.
1000'in altındaki 3 veya 5'in katlarının toplamını bulun.
*/
using namespace std;

int main()
{
    unsigned long int toplam = 0;
    for (int i=0; i<1000; i++)
        if ((i%3==0) || (i%5==0))
            toplam+=i;
    cout << "Toplam : " << toplam << endl;
    return 0;
}
