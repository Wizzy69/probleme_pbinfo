#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long x = 1;
    for (int i = 0; i < n; i++)
        x *= n;
    int p = 0;
    long long k = 1;

    while (x % 2 == 0)
    {
        p++;
        x /= 2;
    }
    k *= (p + 1);

    int d = 3;
    while (d * d <= x)
    {
        p = 0;
        while (x % d == 0)
        {
            p++;
            x /= d;
        }

        k *= (p + 1);
        d += 2;
    }
    if (x != 1)
        k *= 2;
    cout << k % 59999;
}