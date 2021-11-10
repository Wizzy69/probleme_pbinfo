#include <iostream>
using namespace std;

int f(int x)
{
    if (x % 2 == 0)
        return 2;
    for (int d = 3; d * d <= x; d += 2)
        if (x % d == 0)
            return d;
    return x;
}

int main()
{
    int n, m = 0, a[100], x;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (f(x) == x)
            a[m++] = x;
    }

    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
            if (a[i] > a[j])
                x = a[i], a[i] = a[j], a[j] = x;

    for (int i = 0; i < m; i++)
        cout << a[i] << " ";
}