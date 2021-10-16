#include <iostream>
using namespace std;

int prdF(int x)
{
    int p = 1;
    if (x % 2 == 0)
    {
        while (x % 2 == 0)
            x /= 2;
        p *= 2;
    }

    int d = 3;
    while (d * d <= x)
    {
        if (x % d == 0)
        {
            while (x % d == 0)
                x /= d;
            p *= d;
        }
        d += 2;
    }
    if (x != 1)
        p *= x;
    return p;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int sa = prdF(a);
    int sb = prdF(b);

    if (sa > sb)
        cout << a;
    else if (sb > sa)
        cout << b;
    else if (a < b)
        cout << a;
    else
        cout << b;
}