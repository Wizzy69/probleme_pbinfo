int sum_div(int n)
{
    int s = 0;
    int d;
    for (d = 1; d * d < n; d++)
        if (n % d == 0)
            s += d + n / d;
    if (d * d == n)
        s += d;
    return s;
}