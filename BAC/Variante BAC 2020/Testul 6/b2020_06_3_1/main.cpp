int suma(int a, int b)
{
    int s = 1;
    if (b > a)
    {
        int aux = b;
        b = a;
        a = aux;
    }

    for (int d = 2; d <= b; d++)
    {
        if (a % d == 0 && b % d == 0)
            s += d;
    }

    return s;
}
