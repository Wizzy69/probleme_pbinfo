#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int k = 0;
    int s = 0;
    if (n % 2 == 0)
    {
        s += 2;
        n /= 2;
        k++;
    }

    int d = 3;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            s += d;
            n /= d;
            k++;
        }

        if (k == 3)
        {
            cout << s;
            return 0;
        }

        d += 2;
    }

    if (n != 1)
        s += n;
    cout << s;
}