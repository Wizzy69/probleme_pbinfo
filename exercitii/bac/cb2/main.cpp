/*
    Se citesc nr nat din bac.in de forma 2^p
    0 <= p <= 9, p- nr nat
    si un nr nat n de la tastatura

    Sa se afiseze a n-a valoare din fisier daca sirul ar fi sortat crescator. Daca nu este posibil
    scrie "IMPOSIBIL"

    Exemplu:
    bac.in
    2 1 1 4 16 2 1 1 2 2 32 32 32 1 2 2 4
    N=9

    1 = 2^0
    2 = 2^1
    4 = 2^2
*/

#include <iostream>
#include <fstream>

using namespace std;

int poz(int n)
{
    int p = 0;
    while (n % 2 == 0)
        p++, n /= 2;
    return p;
}

int putere(int p)
{
    int nr = 1;
    while (p > 0)
        nr *= 2, p--;
    return nr;
}

//Tema var 97 integral
int main()
{
    
    return 0;
}