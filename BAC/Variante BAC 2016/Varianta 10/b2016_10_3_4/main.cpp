/*
Algoritmul citeste numerele din fisier cate doua si afiseaza numerele dintre ele.
Algoritmul este eficient din punct de vedere al memoriei, deoarece foloseste doar variabile simple
pentru rezulvarea cerintei propuse.
Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge o singura data
numerele de la 1 la n, pe intervale definite de numerele din sirul de pe a doua linie a fisierului dat.


*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream fin("numere.in");
    int n, x, y;
    fin >> n;
    x = 0;
    while (fin >> y)
    {
        for (int i = x + 1; i < y; i++)
            cout << i << " ";
        x = y;
    }

    if (x < n)
        for (int i = x + 1; i <= n; i++)
            cout << i << " ";
    return 0;
}