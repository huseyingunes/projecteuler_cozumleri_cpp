#include <iostream>
#include <math.h>
/*
https://projecteuler.net/problem=9
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
----------------------------------
Pisagor üçlüsü 3 tane doğal sayıdan oluşan a<b<c ve a^2+b^2=c^2 şartlarını sağlayan üçlüdür.
Yukarıdaki açıklamaya göre a+b+c=1000 şartını sağlayan tek Piasgor üçlüsünü "abc" şeklinde bulun.
*/
using namespace std;

int main()
{
  int a,b,c;
  for(a=1;a<1000;a++)
    for(b=a+1;b<1000;b++)
    {
      float _c = sqrt(a*a+b*b);
      c = sqrt(a*a+b*b);
      if ((float)c==_c && (a+b+c)==1000)
      {
        cout << a*b*c << endl;
        return 0;
      }
    }
}
