#include <iostream>
using namespace std;

int sumF(int x)
{
    int s = 0;
    if (x % 2 == 0)
    {
        while (x % 2 == 0)
            x /= 2;
        s += 2;
    }

    int d = 3;
    while (d * d <= x)
    {
        if (x % d == 0)
        {
            while (x % d == 0)
                x /= d;
            s += d;
        }
        d += 2;
    }
    if (x != 1)
        s += x;
    return s;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int sa = sumF(a);
    int sb = sumF(b);

    cout << sa << " " << sb << '\n';

    if (sa > sb)
        cout << a;
    else if (sb > sa)
        cout << b;
    else if (a < b)
        cout << a;
    else
        cout << b;
}