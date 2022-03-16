/*
Subiectul 3:
    1. 10*10*(1+10*(1+10*0)) = 1100
        Raspuns:a

    2.(roșu, roz, albastru,portocaliu),
      (roșu, roz, albastru, verde),
      (roșu, roz, portocaliu, albastru),
      (roșu, roz, portocaliu, verde),
      (roșu, roz, verde, albastru)

        Raspuns:
      (rosu, roz, verde, portocaliu)
      (rosu, protocaliu, albastru, roz)

    3.
*/

#include <iostream>
#include <cmath>
using namespace std;

void radical(int n, int &x, int &y)
{
    x = 1;
    y = 1;

    int d = 2;
    while (n > 1)
    {
        int p = 0;
        while (n % d == 0)
        {
            n /= d;
            p++;
        }

        if (p > 0)
        {
            if (p % 2 == 0)
                x *= pow(d, p / 2);
            else
            {
                y *= d;
                p--;
                if (p > 0)
                    x *= pow(d, p / 2);
            }
        }
        d++;
    }
}