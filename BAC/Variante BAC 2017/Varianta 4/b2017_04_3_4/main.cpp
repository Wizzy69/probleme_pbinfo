#include <iostream>
#include <fstream>
using namespace std;

/*
    Algoritmul citeste datele de intrare si le parcurge numarand fiecare secventa
care are proprietatea ceruta. In momentul in care da de un element ce nu face parte dintr-o secventa
cu proprietatea ceruta, atunci se intreaba daca secventa gasita e cea mai lunga (lc > lmax). Daca da,
atunci pana la momentul respectiv exista o singura secventa de lungime maxima. In caz contrar, daca lungimea secventei
terminate este egala cu lungimea maxima gasita anterior, atunci numarul de secvente de lungime maxima creste cu 1.

    Algoritmul este eficient din punct de vedere al memoriei utilizate, deoarece foloseste doar cateva
variabile simple pentru a parcurge datele de intrare si a determinat ceea ce se cere.

    Algoritmul este unul eficient din punct de vedere al timpului de executare,
deoarece parcurge datele de intrare o singura data. Ordinul de complexitate este O(n).

*/

int main()
{
    ifstream fin("bac.txt");
    int lc, lmax, nr, x;
    lmax = lc = nr = 0;
    while (fin >> x)
    {
        if (x % 2 == 0)
            lc++;
        else
        {
            if (lc > lmax)
                lmax = lc, nr = 1;
            else if (lc == lmax)
                nr++;
            lc = 0;
        }
    }

    if (lc > lmax)
        lmax = lc, nr = 1;
    else if (lc == lmax)
        nr++;

    cout << nr;
    return 0;
}