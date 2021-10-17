#include <iostream>
using namespace std;

int fctPrimi(int n)
{
    int nr = 0;
    if (n % 2 == 0)
    {
        nr++;
        while (n % 2 == 0)
            n /= 2;
    }

    int d = 3;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            nr++;
            while (n % d == 0)
                n /= d;
        }
        d += 2;
    }
    if (n != 1)
        nr++;
    return nr;
}
int main()
{
    int n;
    int x;
    cin >> n;
    int maxi = 0, k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int fprimi = fctPrimi(x);
        if (fprimi > maxi)
            maxi = fprimi, k = x;
        else if (fprimi == maxi && k > x)
            k = x;
    }

    cout << k;
}