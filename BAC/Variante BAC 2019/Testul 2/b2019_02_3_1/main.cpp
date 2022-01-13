int MaxImp(int a, int b)
{
    for (int x = b; x >= a; x--)
    {
        int p = 1;
        int d = 3;
        while (d * d <= x)
        {
            if (x % d == 0)
                p *= d;
            d += 2;
        }
        if (p > x)
            return x;
    }
    return 0;
}
