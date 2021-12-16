/*
    Matrice nxm
    Sa se permute elementele coloanelor, care contin
valori cu toate cifrele in baza 3, cu o linie mai sus. 
*/

#include <iostream>
#include <fstream>
using namespace std;

bool baza3(int x)
{
    do
    {
        if (x % 10 >= 3)
            return false;
        x /= 10;
    } while (x);
    return true;
}

int main()
{
    ifstream fin("mat.in");

    int n, m, a[1000][1000];
    fin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            fin >> a[i][j];

    for (int j = 0; j < m; j++)
    {
        bool ok = false;
        for (int i = 0; i < n && ok == false; i++)
            if (baza3(a[i][j]))
                ok = true;
        if (ok)
        {
            int aux = a[0][j];
            for (int i = 0; i < n - 1; i++)
                a[i][j] = a[i + 1][j];
            a[n - 1][j] = aux;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}