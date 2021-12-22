/*
    Sa se scrie functia f care insereaza inaintea fiecarei linii
palindrom o linie formata cu suma tuturor valorilor din matrice care au
zifra zecilor aceeasi paritate cu cifra sutelor.
*/

#include <iostream>
using namespace std;

void f(int a[28 * 2][20], int &n, int m)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] > 99)
                if (a[i][j] % 2 == a[i][j] / 10 % 10)
                    suma += a[i][j];
    for (int i = 0; i < n; i++)
    {
        int ok_palindrom = 1;
        for (int j = 0; j < m / 2; j++)
            if (a[i][j] == a[i][m - i - 1])
                ok_palindrom = 0;
        if (ok_palindrom == 1)
        {
            n++;
            for (int lin = n - 1; lin > i; lin--)
                for (int j = 0; j < m; j++)
                    a[lin][j] = a[lin - 1][j];
            for (int j = 0; j < m; j++)
                a[i][j] = suma;
            i++;
        }
    }
}