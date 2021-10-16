#include <iostream>
using namespace std;

int f(int n)
{
    int s = 0, p = 0;
    while (n % 2 == 0)
    {
        n /= 2;
        p++;
    }
    s += p;
    for (int d = 3; d * d <= n; d += 2)
    {
        p = 0;
        while (n % d == 0)
        {
            n /= d;
            p++;
        }
        s += p;
    }
    if (n != 0)
        s++;
    return s;
}

int numar(int u, int z, int s)
{
    return s * 100 + z * 10 + u;
}

int main()
{
    int n, p = 1, ok = 1;
    cin >> n;
    if (n < 10)
    {
        if (f(n))
            cout << "DA";
        else
            cout << "NU";
        return 0;
    }
    if (n < 100)
    {
        if (f(n) && f(n % 10 * 10 + n / 10))
            cout << "DA";
        else
            cout << "NU";
        return 0;
    }
    int u = n % 10, z = n / 10 % 10, s = n / 100;
    if (f(numar(u, z, s)) && f(numar(u, s, z)) && f(numar(z, u, s)) && f(numar(z, s, u)) && f(numar(s, u, z)) && f(numar(s, z, u)))
        cout << "DA";
    else
        cout << "NU";
    return 0;
}