int kpn(int a, int b, int k)
{
    for (int i = a; i <= b; i++)
    {
        int d;
        int sdiv = 0;
        for (d = 1; d * d < i; d++)
            if (i % d == 0)
                sdiv += d + i / d;
        if (d * d == i)
            sdiv += d;

        if (i % 2 == sdiv % 2)
            k--;
        if (k == 0)
            return i;
    }
    return -1;
}