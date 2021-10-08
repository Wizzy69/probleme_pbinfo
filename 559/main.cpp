#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    int m1, m2, m3;

    m1 = m2 = m3 = -1;

    if (a >= b && a >= c && a >= d && a >= e)
    {
        m1 = a;
        a = -1;
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        m1 = b;
        b = -1;
    }

    else if (c >= a && c >= b && c >= d && c >= e)
    {
        m1 = c;
        c = -1;
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        m1 = d;
        d = -1;
    }
    else if (e >= a && e >= b && e >= c && e >= d)
    {
        m1 = e;
        e = -1;
    }

    if (a >= b && a >= c && a >= d && a >= e)
    {
        m2 = a;
        a = -1;
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        m2 = b;
        b = -1;
    }

    else if (c >= a && c >= b && c >= d && c >= e)
    {
        m2 = c;
        c = -1;
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        m2 = d;
        d = -1;
    }
    else if (e >= a && e >= b && e >= c && e >= d)
    {
        m2 = e;
        e = -1;
    }

    if (a >= b && a >= c && a >= d && a >= e)
    {
        m3 = a;
        a = -1;
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        m3 = b;
        b = -1;
    }

    else if (c >= a && c >= b && c >= d && c >= e)
    {
        m3 = c;
        c = -1;
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        m3 = d;
        d = -1;
    }
    else if (e >= a && e >= b && e >= c && e >= d)
    {
        m3 = e;
        e = -1;
    }

    cout << m1 + m2 + m3;
}