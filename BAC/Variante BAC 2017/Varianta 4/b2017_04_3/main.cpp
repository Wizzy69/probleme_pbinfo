/*
Subiectul 3:
1. b
2. 3 si 25
3.
*/
void duplicare(int &n)
{
    int a = 0;
    int p = 1;
    while (n)
    {
        if (n % 2 == 0)
        {
            a = a + ((n % 10) / 2) * p;
            p *= 10;
        }

        a = a + n % 10 * p;
        p *= 10;
        n /= 10;
    }
    n = a;
}