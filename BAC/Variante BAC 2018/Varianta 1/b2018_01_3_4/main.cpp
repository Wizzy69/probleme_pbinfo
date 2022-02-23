#include <iostream>
#include <fstream>
using namespace std;
/*
    Algoritmul genereaza termenii sirului plecand de la x si y, folosind formula data.

    Algoritmul este eficient din punct de vedere al memoriei, deoarece foloseste doar cateva variabile simple
pentru prelucrarea datelor de intrare.
    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece este unul liniar,
ordinul de complexitate fiind O(n). Acesta face o singura parcuregere a termenilor sirului generat.

*/

int main()
{
    int x, y;
    cin >> x >> y;
    ofstream fout("bac.txt");
    int t = 4; // ca sa intre pe while
    fout << y << " " << x << " ";
    while (t >= 3)
    {
        t = 2 * x - y + 2;
        fout << t << " ";
        y = x;
        x = t;
    }

    return 0;
}