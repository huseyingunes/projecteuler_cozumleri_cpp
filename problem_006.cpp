#include <iostream>
/*
https://projecteuler.net/problem=6
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
---------------------------
İlk 10 doğal sayının karelerinin toplamı ile toplamlarının karesi arasındaki fark 3025-385 = 2640.
İlk 100 doğal sayının toplamlarının karesi ile karelerinin toplamları arasındaki fark kaçtır?
*/
using namespace std;

int main()
{
    int kareler_toplami=0, toplamlar_karesi=0;
    for (int i=1; i<=100;i++)
    {
        toplamlar_karesi+=i;
        kareler_toplami+=(i*i);
    }
    cout << "Fark : " << (toplamlar_karesi*toplamlar_karesi)-kareler_toplami << endl;
    return 0;
}
