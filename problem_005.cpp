#include <iostream>
/*
https://projecteuler.net/problem=5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
----------------------------------
2520 1'den 10'a kadar bütün sayılara tam bölünebilen en küçük sayıdır.
O halde 1'den 20'ye kadar bütün sayılara tam bölünebilen en küçük sayı kaçtır?
*/
using namespace std;
bool bolunuyor_mu(int sayi)
{
    for(int i=2;i<=20;i++)
        if(sayi%i!=0)
            return false;
    return true;
}

int main()
{
    int s;
    for(s=20;;s++)
    {
        if(bolunuyor_mu(s))
            break;
    }
    cout << "Sayi : " << s << endl;
    return 0;
}
