#include <iostream>
#include <math.h>
#include <gmp.h>
/*
https://projecteuler.net/problem=15
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
--------------------
20*20 lik bir ızgarada(grid) sol üst köşeden başlayarak
yalnızca sağa ve aşağı hareket ederek kaç farklı şekilde sağ alt
noktaya erişilebilir.
*/
using namespace std;
/*
16. soruda da kullanılan gmp kütüphanesi kullanılmıştır.
Bu soru tipik bir bir kombinatorik problemidir. Aşağıda kullanılan
fonksiyonu araştırarak detaylara erişebilirsiniz.
Ancak bu soru için brute force (kaba kuvvet, olasiliklarin hepsini denemek suretiyle yapilan deneme)
yöntemiyle çözmeye çalışmak algoritma öğrenme açısından
daha faydalı olacaktır.
İlerleyen zamanlarda vakit kalırsa bu soruyu bir de öyle çözeceğim.

https://tr.wikipedia.org/wiki/Kombinatorik

*/

int main()
{
    mpz_t a,b;
    mpz_init(a);
    mpz_init(b);
    mpz_set_ui(b, 40);

    mpz_bin_ui (a, b, 20);

    gmp_printf ("%Zd\n", a);
    mpz_clear(a);
    return 0;
}
