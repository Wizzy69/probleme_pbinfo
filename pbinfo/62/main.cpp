#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p = 0;
    while (n % 2 == 0)
    {
        p++;
        n /= 2;
    }
    if (p > 0)
        cout << 2 << ' ' << p << '\n';
    int d = 3;
    while (d * d <= n)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        if (p > 0)
            cout << d << ' ' << p << '\n';
        d += 2;
    }
    if (n > 1)
        cout << n << " 1";
}