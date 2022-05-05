#include <iostream>
#include <fstream>
/*
    Alogritmul este bazat pe interclasarea a doua siruri ordonate crescator.
Astfel, se genereaza un vector solutie ordonat crescator in care sunt salvate toate valorile pare care se afla
in cel putin un sir din cele doua.
    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge datele de intrare o singura
data pentru a determina sirul cerut,si inca k-1 pasi pentru afisare.

*/
using namespace std;

int main()
{
    ifstream fin("bac.in");
    int n, m;
    fin >> n >> m;
    int a[10000], v[10000];
    for (int i = 0; i < n; i++)
        fin >> a[i];

    int k = 0, i = 0, j = 0, x;
    fin >> x;
    while (i < n && j < m)
    {
        if (a[i] < x)
        {
            if (a[i] % 2 == 0)
                v[k++] = a[i];
            i++;
        }
        else if (a[i] > x)
        {
            if (x % 2 == 0)
                v[k++] = x;
            fin >> x;
            j++;
        }
        else
        {
            if (a[i] % 2 == 0)
                v[k++] = a[i];
            i++;
            j++;
            fin >> x;
        }
    }

    while (i < n)
    {
        if (a[i] % 2 == 0)
            v[k++] = a[i];
        i++;
    }
    while (j < m)
    {
        if (x % 2 == 0)
            v[k++] = x;
        fin >> x;
        j++;
    }

    for (int i = k - 1; i >= 0; i--)
        cout << v[i] << " ";
    return 0;
}