#include <iostream>
#include <math.h>
/*
https://projecteuler.net/problem=7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
------------------------
Ýlk 6 asal sayý:2,3,5,7,11 ve 13'tür. Listeye göre 13, 6. asay sayýdýr.
Ayný þekilde ilerlenirse 10001. asal sayý hangisi olur?
*/
using namespace std;
// çabuk ve basit asal sayý algoritmalarýndan biri aþaðýda yazýlmýþtýr.
// Daha farklý asal sayý bulma algoritmalarý için : https://en.wikipedia.org/wiki/Primality_test
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

int main(int argc, char** argv) {
	int a=2,sayac=0;
	do
	{
		if(asal_mi(a))
			sayac++;
		a++;
	}while(sayac<10001);
	cout << "10001 asal sayi : " << (a)-1 << endl;
	return 0;
}
