#include <iostream>
#include <fstream>

using namespace std;

/*
    Algoritmul parcurge datele de intrare, prin intermediul a doua variabile simple (x si y).
Acesta determina daca numarul citit reprezinta un nou varf maxim local, iar daca acesta intradevar este unul, il afiseaza.
In caz contrar, ne punem problema daca elementul citit este un element al unu subsir cu elemente varfuri locale maxime, iar in acest caz afisam elemntul citit.
Daca elementul citit este mai mic decat varful local maxim gasit (stocat in variabila 'vf'), atunci marcam sfarsitul subsirului, adica variabila 'ok' devine 0.

    Algoritmul este eficient din punct de vedere al memoriei utilizate, deoarece foloseste doar variabile simple pentru a efectua citirea si prelucrarea datelor de intrare.
    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge datele de intrare doar o singura data, acesta avand o complexitate liniara (O(n)).

*/

int main()
{
    ifstream fin("bac.txt");
    int x, y, vf = -1, ok = 1;
    fin >> x;
    cout << x << " ";
    vf = x;
    while (fin >> y)
    {
        if (y > vf)
        {
            ok = 1;
            cout << y << " ";
            vf = y;
        }
        else if (y == x && y == vf && ok == 1)
            cout << y << " ";

        else if (x != y)
            ok = 0;
        x = y;
    }

    return 0;
}