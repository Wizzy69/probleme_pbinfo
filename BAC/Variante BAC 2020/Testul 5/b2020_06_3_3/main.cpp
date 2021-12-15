#include <iostream>
#include <fstream>
using namespace std;

/*
    Algoritmul este eficient din punct de vedere al memoriei utilizate deoarece foloseste
doar variabile simple (x,min,max) pentru a parcurge datele de intrare si a memora datele necesare
rezolvarii problemei.
    Algoritmul este eficient din punct de vedere al timpului de executare deoarece parcurge
datele de intrare o singura data prin intermediul unei singure variabile simple (x).

    Algoritmul proiectat face minimul si maximul dintre valorile de doua cifre, iar apoi, in cazul in care
acestea exista, afiseaza valoarea minima-1 si valoarea maxima - 1. In cazul in care nu exista, atunci se afiseaza mesajul
corespunzator ("nu exista"). 
*/

int main()
{
    ifstream fin("bac.in");
    int min, max;
    min = 100;
    max = 9;
    int x;
    while (fin >> x)
    {
        if (x > 9 && x < 100)
        {

            if (x < min)
                min = x;
            if (x > max)
                max = x;
        }
    }
    if (min == 9999999999 || max == -1)
        cout << "nu exista";
    else
        cout << min - 1 << " " << max + 1;

    return 0;
}