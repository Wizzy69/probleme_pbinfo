#include <iostream>
#include <cmath>
using namespace std;

void P(int a, int b)
{
    for (int i = a; i <= b; ++i)
    {
        auto s = sqrt(i);
        if (s == floor(s))
        {
            int ok = 1;
            if (s == 2)
                cout << i;
            else
            {
                for (int d = 3; d * d <= s; d += 2)
                    if ((int)floor(s) % d == 0)
                    {
                        ok = 0;
                        break;
                    }
                if (ok == 1)
                    cout << i;
            }
        }
    }
}