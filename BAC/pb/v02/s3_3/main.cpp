#include <iostream>
using namespace std;

int f(int a)
{
    int d, e;
    d = 2;
    e = 0;
    int s = 0;
    while (a % d == 0)
    {
        a /= d;
        e++;
    }

    if (e > 0)
        s += e;

    for (d = 3; d * d <= a; d += 2)
    {
        e = 0;
        while (a % d == 0)
            a /= d, e++;
        if (e > 0)
            s += e;
    }
    if (a != 1)
        s++;
    return s;
}

int main()
{
    int n, a, b, c;
    int ok = 0;
    cin >> n;
    if (n < 10)
        if (f(n) == 1)
            ok = 1;

        else if (n > 9 && n < 100)
            if (f(n) == 1 && f(n % 10 * 10 + n / 10) == 1)
                ok = 1;
            else
            {
                a = n / 100;
                b = n / 10 % 10;
                c = n % 10;
                int n6, n2, n3, n4, n5;
                n2 = a * 100 + c * 10 + b;
                n3 = b * 100 + a * 10 + c;
                n4 = b * 100 + c * 10 + a;
                n5 = c * 100 + a * 10 + b;
                n6 = c * 100 + b * 10 + a;
                if (f(n2) == 1 && f(n3) == 1 && f(n4) == 1 && f(n5) == 1 && f(n6) == 1)
                    ok = 1;
            }
    return 0;
}