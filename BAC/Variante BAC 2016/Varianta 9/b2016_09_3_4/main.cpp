#include <iostream>
#include <fstream>

using namespace std;
/*
Algoritmul citeste numerele din fisier, cate unu pe rand. In momentul in care algoritmul a gasit 3 numere impare,
atunci incepe sa prelucreze numerele pare urmatoare conform cerintei, determinand cele doua numere pare cerute.
Daca se gasesc mai mult de 3 numere impare, atunci algoritmul se opreste.

Algoritmul este eficitent din punct de veder al memoriei, deoarece foloseste doar variabile simple
pentru a rezolva problema.

Algoritmul este eficient din punct de vedere al timpului de executare, deoarece citeste datele de intrare
o singura data.

*/
int main()
{
    ifstream fin("bac.txt");
    ofstream fout("bac_out.txt");
    int x, m = -1, M = -1, nrimpari = 0;
    while (fin >> x && nrimpari <= 3)
    {
        if (x % 2 == 1)
            nrimpari++;
        if (nrimpari == 3 && x % 2 == 0)
        {
            if (x > M)
                m = M, M = x;
            else if (x > m)
                m = x;
        }
    }
    if (m == -1 || M == -1)
        cout << "Nu exista";
    else
        cout << m << " " << M;
}