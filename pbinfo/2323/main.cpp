#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;
    unsigned long long x = pow(n, n);
    long long p = 0;
    unsigned long long k = 1;
    while (x % 2 == 0)
    {
        p++;
        x /= 2;
    }
    k *= (p + 1);
    unsigned long long d = 3;
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

    //12 = 2^2 * 3^1 = (2+1)*(1+1) = 6
}