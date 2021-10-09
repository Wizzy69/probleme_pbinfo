int prim(int n)
{
    if (n < 2 || n > 2 && n % 2 == 0)
        return 0;
    else
        for (int d = 3; d * d <= n; d += 2)
            if (n % d == 0)
                return 0;
    return 1;
}