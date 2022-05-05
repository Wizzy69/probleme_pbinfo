void divPrimi(int n, int &s)
{
    s = 0;
    int p = 0;
    int d = 2;
    while (n % d == 0)
    {
        n /= d;
        p++;
    }

    if (p % 2 != 0)
        s = 2;

    while (d * d <= n)
    {
        p = 0;
        while (n % d == 0)
            n /= d, p++;
        if (p % 2 != 0)
            s += d;
        d += 2;
    }

    if (n > 1)
        s += n;
}