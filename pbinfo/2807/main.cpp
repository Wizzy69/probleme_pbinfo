#include <iostream>
using namespace std;

int vmin(int **a, int n, int l)
{
    int imin;
    imin = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][l] < a[imin][l])
            imin = i;
    }

    return imin;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int imin_f = vmin(a, n, 0);
    int imin_l = vmin(a, n, m - 1);

    int aux = a[imin_l][m - 1];
    a[imin_l][m - 1] = a[imin_f][0];
    a[imin_f][0] = aux;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    return 0;
}