/*
Subiectul 3:
    1. c
    2.
    {stilou, pană, toc, creion, pensulă}
    (toc, creion, stilou, pană, pensulă),
    (toc, creion, stilou, pensulă, pană),
    (toc, creion, pană, stilou, pensulă),
    (toc, creion, pană, pensulă, stilou),
    (toc, creion, pensulă, stilou, pană)

    (toc, creion, pensula, pana, stilou)
    (toc, pensula, creion, stilou, pana)

    3.


*/

int interval(int &n)
{
    int x = n + 1;
    int ok = 0;
    while (ok == 0)
    {
        int prim = 1;
        if (x < 2 || x > 2 && x % 2 == 0)
            prim = 0;
        else
        {
            int d;
            for (d = 3; d * d <= x; d += 2)
                if (x % d == 0)
                    prim = 0;
        }

        if (prim == 1)
            ok = 1;
        x++;
    }

    return x;
}