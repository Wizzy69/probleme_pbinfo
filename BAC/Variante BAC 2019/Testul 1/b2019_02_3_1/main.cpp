int Egal(int n)
{
    if (n < 10)
        return n % 2;

    int x = -1;
    while (n && x == -1)
    {
        if (n % 2 == 1)
            x = n % 10;
        n /= 10;
    }

    while (n)
    {
        if (n % 2 == 1 && n % 10 != x)
            return 0;
        n /= 10;
    }

    return 0;
}