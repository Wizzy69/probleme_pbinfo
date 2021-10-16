#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int p = 0;
    long long d = 3;
    while (n % 2 == 0)
    {
        p++;
        n /= 2;
    }

    while (d * d <= n)
    {
        if (d * d == n)
        {
            cout << d;
            return 0;
        }
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }
        d += 2;
    }

    if (n != 1)
        cout << n;
}