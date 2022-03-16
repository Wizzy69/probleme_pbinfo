/*
Subiectul 2:
1. b
2. d
3. (t[0].x==t[0].y && t[0].y == t[0].z)
4.
0 0 0 0 1
1 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0

5.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, m, a[50][50];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int i1 = 0, i2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] < a[i1][0])
            i1 = i;
        if (a[i][m - 1] < a[i2][m - 1])
            i2 = i;
    }

    int aux = a[i2][m - 1];
    a[i2][m - 1] = a[i1][0];
    a[i1][0] = aux;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}