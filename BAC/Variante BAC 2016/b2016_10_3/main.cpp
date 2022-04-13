/*
Subiectul 3:
1. c
2.
(pere, fragi, zmeura)
(mure, afine, zmeura)

3.
*/

int cifreImpare(int n)
{
    int newNr = 0, p = 1;
    do
    {
        if (n % 2 == 0)
        {
            newNr = n % 10 * p + newNr;
            p *= 10;
        }
        n /= 10;
    } while (n);
    if (newNr == 0)
        return -1;
    return newNr;
}
