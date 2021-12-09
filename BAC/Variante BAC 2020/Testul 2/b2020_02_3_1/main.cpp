int multiplu(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int x = n * i;
        int d = 2;
        while (d * d < x)
            d++;
        if (d * d == x)
            return x;
    }
    return 0;
}
