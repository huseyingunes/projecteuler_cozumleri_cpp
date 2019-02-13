#include <iostream>
#include <math.h>
#include <gmp.h>
/*
https://projecteuler.net/problem=16
215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^1000?
---------------
2 �zeri 1000 say�s�n�n hanelerinin toplam� ka�t�r?
*/
using namespace std;
/*
c++ programlama dilinde 2 �zeri 1000 say�s�n� saklayabilecek
b�y�kl�kte herhangi bir de�i�ken t�r� yoktur.
Bu y�zden c++ i�in geli�tirilmi� b�y�k say�larla i�lem yapmaya
imk�n tan�yan GMP k�t�phanesiden faydalan�lm��t�r.
*/

int main()
{
    int toplam=0;
    mpz_t a,b;
    mpz_init(a);
    mpz_init(b);
    mpz_set_ui(a, 2);
    mpz_set_ui(b, 1);

    for (int i=1;i<=1000;i++)
    {
        mpz_mul (b, a, b);
    }
    char * sayi = mpz_get_str(NULL,10,b);

    for(char* it = sayi; *it; ++it) {
        toplam+=(int)*it-'0';
    }
    cout << "Toplam : " << toplam << endl;
    //gmp_printf ("%Zd\n", b); say�y� yazd�r�r
    mpz_clear(a);
    return 0;
}
