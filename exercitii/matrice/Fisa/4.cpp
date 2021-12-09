#include <iostream>
using namespace std;

int a[100][100];
int m, n;

bool prim(int x)
{
    if (x < 2 || x > 2 && x % 2 == 0)
        return false;
    for (int d = 3; d * d <= x; d += 2)
        if (x % d == 0)
            return false;
    return true;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
    {
        bool ok = true;
        for (int j = 0; j < m; j++)
            if (!prim(a[i][j]))
            {
                ok = false;
                break;
            }
        if (ok)
            cout << i << " ";
    }

    return 0;
}