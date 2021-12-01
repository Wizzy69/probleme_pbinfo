/*
  Se citesc 10^7 numere naturale de maxim 9 cifre din fisierul bac.in
  Sa se afisaeze cea mai lunga secventa formata din valori ordonate sctrict crescator.
  Secventa este alcatuita din cel putin doua valori, iar daca nu exista nicio astfel de secventa
scrie mesajul "nu exista". Daca sunt mai multe secvente cu aceasta proprietate se va afisa prima secventa gasita.

3 4 8 10 11 0 0 0 1 2 3 0 5 8 9 10 12 => 0, 5, 8 9 10 12
1 2 3 4 0 1 2 3 0
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.in");
    int x, y, n = 0;
    int *a = (int *)calloc(10000001, sizeof(int));
    while (fin >> x)
        a[n++] = x;
    int lc = 1, lmax = 0, ic = 0, imax = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] < a[i + 1])
            lc++;
        else
        {
            if (lc >= 2 && lmax < lc)
                lmax = lc, imax = ic;
            lc = 1;
            ic = i + 1;
        }
    }
    if (lc >= 2 && lmax < lc)
        lmax = lc, imax = ic;

    for (int i = imax; i <= imax + lc; ++i)
        cout << a[i] << " ";

    return 0;
}