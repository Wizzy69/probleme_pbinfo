/*
Subiectul 3:
1. c
2.
(brandusa, liliac, margareta)
(iasomie, lalea, margareta)
3.

*/

int ranguri(int n)
{
    int nr = 0, k = 0;
    while (n)
    {
        if (n % 10 == k)
            nr++;
        k++;
        n /= 10;
    }

    return nr;
}