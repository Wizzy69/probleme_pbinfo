/*
    Algoritmul marcheaza numerele din sirul de numere aflat in fisierul bac.txt. Dupa aceea, gaseste primul numar marcat.
Folosing numarul gasit, incepe o repetitiva de la numarul gasit pana la 100 si, daca numarul este marcat, verifica daca diferenta dintre cele doua numere este >= 2.
In caz afirmativ, se afiseaza perechea gasita si se marcheaza faptul ca exista cel putin o solutie. Fie ca diferenta este >=2 sau nu, algoritmul salveaza ultimul numar marcat.
    In final, daca nu exista solutie, se afiseaza mesajul "nu exista".
    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge
datele de intrare o singura data si mai face un numar constant de 100 de pasi.

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int x, fr[100] = {0}, m, ok = 0;

    while (fin >> x)
        fr[x] = 1;
    m = 0;

    while (fr[m] == 0)
        m++;

    for (int i = m; i <= 100; i++)
    {
        if (fr[i] == 1)
        {
            if (i - m >= 2)
            {
                cout << m << " " << i << "\n";
                ok = 1;
            }
            m = i;
        }
    }

    if (ok == 0)
        cout << "nu exista";
    return 0;
}