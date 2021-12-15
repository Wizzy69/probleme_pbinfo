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
    int n;
    fin >> n;
    int a[10000];
    for (int i = 0; i < n; i++)
        fin >> a[i];

    int nr = 0;
    int imin = 0, imax;
    int nrmax = -1;
    int imin_sir;
    for (int i = 0; i < n; i++)
    {
        //1 2 3 4 5 6
        if (a[i] % 2 == 0)
            nr++;
        else if (nr >= nrmax)
        {
            nrmax = nr;
            imax = i;
            imin = imax - nr + 1;
            nr = 0;
        }
    }

    if (nr >= nrmax)
    {
        nrmax = nr;
        imax = n - 1;
        imin = imax - nr + 1;
        nr = 0;
    }

    for (int i = imin; i <= imax; i++)
        cout << a[i] << " ";

    return 0;
}