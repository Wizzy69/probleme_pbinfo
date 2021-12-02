/*
10 4
-1 1 3 4 5 6 11 15 16 117 ---> sir ordonat crescator
0 1 9 20

Afisati capetele intervalului determinat de 2 nr aflate pe poz consecutive pe a 3a linie care contin cele mai multe valori de pe a 2a linie.
Daca sunt mai multe intervale cu aceeasi proprietate, scrie ultmul interval

[0, 1]  - 1
[1, 9]  - 5
[9, 20] - 3

p - cautbin(a,n,0) -> 2 |
                        | => cate am: q-p+1 = 2-2+1=1
q - cautbin(a,n,1) -> 2 |

p = cautbin(a,n,1) -> 2 |
                        | => cate am: q-p+1 = 6-2+1=5
q = cautbin(a,n,9) -> 6 |
*/


#include <iostream>
#include <fstream>
using namespace std;

int cautbinx(int a[], int n, int x)
{
    int st = 1;
    int dr = n;
    int poz = -1;
    while (st <= dr)
    {
        int mij = (st + dr) / 2;
        if (a[mij] >= x)
            poz = mij, dr = mij - 1;
        else if (a[mij] < x)
            st = mij + 1;
    }

    return poz;
}

int cautbiny(int a[], int n, int y)
{
    int poz = -1;
    int st = 1;
    int dr = n;
    while (st <= dr)
    {
        int mij = (st + dr) / 2;
        if (a[mij] <= y)
            st = mij + 1,
            poz = mij;
        else if (a[mij] > y)
            dr = mij - 1;
    }

    return poz;
}

int main()
{
    ifstream fin("BAC.DAT");
    int n, m, a[1005], x, y, xmax, ymax;
    int nrmax = 0;

    fin >> n >> m;
    for (int i = 0; i < n; i++)
        fin >> a[i];

    fin >> x;
    while (fin >> y)
    {
        int nr = cautbiny(a, n, y) - cautbinx(a, n, x) + 1;
        if (nr >= nrmax)
            nrmax = nr, xmax = x, ymax = y;
        x = y;
    }

    cout << "[" << xmax << "," << ymax << "] = " << nrmax << '\n';
    return 0;
}