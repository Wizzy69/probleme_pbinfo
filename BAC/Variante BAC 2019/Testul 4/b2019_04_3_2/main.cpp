#include <iostream>
using namespace std;

int main()
{
    int n, m, a[21][21];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int mij = n / 2, ok = 1;
    for (int i = 0; i < m && ok == 1; i++)
    {
        for (int j = 0; j < mij && ok == 1; j++)
            if (a[i][j] != a[i][n - j - 1])
                ok = 0;
    }

    if (ok == 0)
        cout << "NU";
    else
        cout << "DA";
    return 0;
}