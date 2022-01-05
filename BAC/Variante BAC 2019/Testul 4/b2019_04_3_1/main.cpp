void Impare(int &n)
{
    if (n < 10 && n % 2 != 0)
    {
        n--;
        return;
    }

    int aux = 0, p = 1;
    while (n)
    {
        int c = n % 10;
        if (c % 2 != 0)
            c--;
        aux = aux + p * c;
        p *= 10;
        n /= 10;
    }

    n = aux;
}
