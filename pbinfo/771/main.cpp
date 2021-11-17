#include <iostream>
using namespace std;

int suma_linie(int *a, int l)
{
    int s = 0;
    for (int i = 0; i < l; ++i)
        s += a[i];
    return s;
}

void lucru(int **a, int l, int l2, int m)
{
    for (int i = 0; i <= m; ++i) // schimb si suma
    {
        int aux = a[l2][i];
        a[l2][i] = a[l][i];
        a[l][i] = aux;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **a = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        int j;
        a[i] = new int[m + 1];
        for (j = 0; j < m; ++j)
            cin >> a[i][j];
        a[i][j] = suma_linie(a[i], m);
    }
    bool ok = false;
    do
    {
        ok = false;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i][m] > a[i + 1][m])
            {
                lucru(a, i, i + 1, m);
                ok = true;
            }
        }
    } while (ok == true);
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}