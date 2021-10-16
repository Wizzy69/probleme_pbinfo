#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p = 0;
    if (n >= 2)
        while (n % 2 == 0)
        {
            n /= 2;
            p++;
        }
    if (p > 0)
        for (int i = 0; i < p; i++)
            cout << "2 ";

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
            for (int i = 0; i < p; i++)
                cout << d << " ";
        d += 2;
    }

    if (n != 1)
        cout << n;

    return 0;
}