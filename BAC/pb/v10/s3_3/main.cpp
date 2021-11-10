void sub(int n, int &a, int &b)
{
    int d;
    a = b = 1;
    if (n % 2 == 0)
    {
        b = 2;
        while (n % 2 == 0)
            n /= 2;
    }

    d = 3;
    while (d * d <= n)
    {
        if (n % d == 0)
        {
            a = b;
            b = d;
            while (n % d == 0)
                n /= d;
        }
        d += 2;
    }

    if (n > 1)
        b = a, a = n;
}