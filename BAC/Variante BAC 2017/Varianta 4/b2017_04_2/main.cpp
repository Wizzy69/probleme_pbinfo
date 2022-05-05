/*
Subiectul 2:
1. b
2. c
3.  cout << x.nume[0] << '\n';
    cout << (float)((x.media1+x.media2)/2);

4.
0 1 0 0 0
0 0 1 0 0
0 0 0 1 0
0 0 0 0 1
1 1 0 0 0

5.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[50][50];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        a[i][0] = a[i][m - 1] = a[n - 1][m - 1];
    for (int j = 0; j < m; j++)
        a[0][j] = a[n - 1][j] = a[n - 1][m - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}