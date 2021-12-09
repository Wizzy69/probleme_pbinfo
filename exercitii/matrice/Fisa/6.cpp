int cifmin(int x)
{
    int aux, mini = 10, p = 1;
    aux = x;
    while (aux)
    {
        if (mini > aux % 10)
            mini = aux % 10;
        aux /= 10;
    }
    aux = 0;
    while (x)
    {
        if (x % 10 != mini)
            aux = x % 10 * p + aux, p *= 10;
        x /= 10;
    }
}

void prelucrare2(int a[][50], int n)
{
    for (int i = 1; i < n; i++)
        for (int j = n - i; j < n; j++)
            cifmin(a[i][j]);
}
