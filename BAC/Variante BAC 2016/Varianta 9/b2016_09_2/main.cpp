/*
Subiectul 2:
1. c
2. c
3. 11aur
4. 1 5 7
5.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, x, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x;
    int ok = 1;
    for (int i = 0; i < n && ok; i++)
        if (a[i][0] == x || a[i][m - 1] == x)
            ok = 0;
    for (int j = 0; j < m && ok; j++)
        if (a[0][j] == x || a[n - 1][j] == x)
            ok = 0;

    if (ok)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}