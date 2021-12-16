#include <iostream>
using namespace std;

int a[100][100], n;

int nrdiv(int x)
{
    int nr = 0;
    int d;
    for (d = 1; d * d < x; d++)
        if (x % d == 0)
            nr += 2;
    if (d * d == x)
        nr++;
    return nr;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int p = 1;
    for (int i = 0; i < n; i++)
    {
        if (nrdiv(a[i][i]) % 2 == 1)
            p *= a[i][i];
        if (nrdiv(a[i][n - i - 1]) % 2 == 1)
            p *= a[i][n - i - 1];
    }

    cout << p;

    return 0;
}