#include <iostream>
using namespace std;

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
    int n, m, nr = 0;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            for (int j = 1; j <= m; j++)
            {
                int x;
                cin >> x;
                if (prim(x))
                    nr++;
            }
        else
            for (int j = 1; j <= m; j++)
            {
                int x;
                cin >> x;
            }
    }

    cout << nr;
    return 0;
}