#include <iostream>
#include <fstream>
using namespace std;

/*
    Algoritmul citeste numerele din fisier si daca doua numere alaturate sunt egale, atunci ele fac parte
din acelasi subsir. Subsirul de elemente egale se incheie daca doua elemente alaturate au valori diferite.
Cum sirul este crescator (din cerinta), este de ajuns sa verificam daca lungimea subsirului este impara.
In caz afirmativ, afisam x (ultimul numar din subsir) si incheiem executarea. In caz contrar,
se continua aplicarea acestei metode pana cand nu mai sunt elemente necitite in fisier. In acest caz,
 programul iese de pe repetitiva de citire si afiseaza mesajul "nu exista".

    Algoritmul este eficient din punct de vedere al memoriei utilizate, deoarece foloseste doar cateva
variabile simple pentru a parcurge datele de intrare si a determinat ceea ce se cere.

    Algoritmul este unul eficient din punct de vedere al timpului de executare,
deoarece parcurge datele de intrare cel mult o singura data, ordinul de complexitate fiind O(n) (algoritm liniar).

*/

int main()
{
    ifstream fin("bac.txt");
    int lc = 1, x, y;
    fin >> x;
    while (fin >> y)
    {
        if (x == y)
            lc++;
        else if (lc % 2 == 1)
            break;
        /*{
                cout << x;
                return 0;
          }*/
        else
            lc = 1;
        x = y;
    }
    if (lc % 2 != 0)
        cout << x;
    else
        cout << "nu exista";
    return 0;
}