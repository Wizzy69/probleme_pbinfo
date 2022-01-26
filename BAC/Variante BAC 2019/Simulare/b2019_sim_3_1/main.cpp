void inserare(int &n)
{
    int nr, p, c;
    nr = 0;
    p = 1;
    while (n > 9)
    {
        nr = n % 10 * p + nr;
        p *= 10;
        int x = n % 10, y = n / -10 % 10;
        if (x - y < 0)
            nr = (y - x) * p + nr;
        else
            nr = (x - y) * p + nr;
        p *= 10;
        n /= 10;
    }
    nr = n * p + nr;
    n = nr;
}