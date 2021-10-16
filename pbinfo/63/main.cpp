#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 0;
    int factor;
    while (n % 2 == 0)
    {
        p++;
        n /= 2;
    }
    if (p > 0)
        factor = 2;
    int d = 3;

    while (d * d <= n)
    {
        p = 0;
        while (n % d == 0)
        {
            n /= d;
            p++;
        }
        if (p > 0)
            factor = d;
        d += 2;
    }

    if (n != 1 && p == 0)
        factor = n;
    cout << factor;
}