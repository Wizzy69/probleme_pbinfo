#include <iostream>
using namespace std;

int a[100][100];
int n;

int fprimi(int x)
{
    int diviz = -1;
    int pmin = 999999;
    int p = 0;
    while (x % 2)
    {
        x /= 2;
        p++;
    }
    if (p < pmin && p > 0)
        pmin = p, diviz = 2;

    int d = 3;
    while (d * d <= x)
    {
        p = 0;
        while (x % d == 0)
        {
            x /= d;
            p++;
        }

        if (p > 0 && p <= pmin)
            pmin = p, diviz = d;
    }
    if (x > 1)
        if (1 <= pmin)
            pmin = 1, diviz = x;

    return diviz;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << fprimi(a[n / 2][n / 2]);
}