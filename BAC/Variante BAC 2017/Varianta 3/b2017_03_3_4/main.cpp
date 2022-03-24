/*
    Algoritmul parcurge primul sir si verifica daca acesta este strict crescator.
In cazul in care nu este, afiseaza mesajul "imposibil" pe ecran si isi incheie executia.

In cazul in care sirul este strict crescator, algoritmul parcurge cel de-al doilea sir
si verifica pozitia de la care ar putea fi inserat primul sir (in functie de prima valoare).

In cazul in care doua elemente se repeta (un element din sirul 2 cu primul din sirul 1), inseamna
ca sirul final nu are cum sa fie ordonat strict crescator. In acest caz, algoritmul
afiseaza "imposibil" si isi incheie executia. Altfel, programul afiseaza indicele de la
care poate fi inserat sirul 1 in sirul 2.

    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece
parcurge datele de intrare o singura data. Astfel, algoritmul este unul liniar in O(n).

    Algoritmul este eficient din punct de vedere al memoriei utilizate, deoarece
parcurge datele de intrare folosind doar cateva variabile simple.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.in");
    int n, m;
    fin >> n >> m;
    int x, y, p;
    fin >> p; // primul element din sirul 1
    x = p;

    for (int i = 1; i < n; i++)
    {
        fin >> y;
        if (x >= y)
        {
            // primul sir nu este strict crescator
            cout << "imposibil";
            return 0;
        }
        x = y;
    }

    for (int i = 1; i <= m; i++)
    {
        fin >> x;
        if (x == p)
        {
            // aici ar fi trebuit sa se insereze, dar
            // 2 elemente sunt egale => sirul nu mai este strict crescator
            cout << "imposibil";
            return 0;
        }

        if (x > p)
        {
            cout << i;
            return 0;
        }
    }

    cout << m + 1;
    return 0;
}