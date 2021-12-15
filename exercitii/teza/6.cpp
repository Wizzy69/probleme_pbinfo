/*

Se da un fisier cu un sir de numere naturale ( n< 10000 de numere)
Sa se afiseze cea mai lunga secventa de numere pare.
Daca exista mai multe astfel de secvente sa se afiseze
ultima secventa de acest tip.

*/
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream fin("sir.in");

    int x, nr = 0;
    int nrmax = -1;
    while (fin >> x)
    {
        if (x % 2 == 0)
            nr++;
        else if (nr > nrmax)
            nrmax = nr;
    }

    if (nr > nrmax)
        nrmax = nr;
    cout << nrmax;
    return 0;
}

/*
    x=0
    repeta
        x <- x+1
    pana cand x > 10

    x=0
    repeta
        x <- x+1
    cat timp x <= 10

    executa

    cat timp x <= 10

*/