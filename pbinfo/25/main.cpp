int cmmnr(int n)
{
    int x = 0;
    int a[11]; // cel mult 10 cifre (n <= 1.000.000.000)
    while (n)
    {
        a[x++] = n % 10;
        n /= 10;
    }

    // n = 0 la iesire de pe while

    for (int i = 0; i < x - 1; i++) // mergem cu o cifra mai putin ca sa putem compara pe penultima cu ultima
                                    // (ultima fiind luata de for-ul de mai jos)
        for (int j = i + 1; j < x; j++)
            if (a[i] < a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }

    for (int i = 0; i < x; i++)
        n = n * 10 + a[i];

    return n;
}