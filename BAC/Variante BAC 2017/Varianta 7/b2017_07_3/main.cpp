/**
Subiectul 3:
1. b
2. (2,3,4,1,5,6)
   (2,3,4,1,6,5)
3.
*/

#include <iostream>
using namespace std;

void triplete(int a, int b, int c)
{
    int x, y, z, ok = 0;
    for (x = a; x <= b; x++)
        for (y = a; y <= b; y++)
            for (z = a; z <= b; z++)
                if (x + y + z == c && x <= y && y <= z)
                {
                    ok = 1;
                    cout << "{" << x << "," << y << "," << z << "} ";
                }

    if (ok == 0)
        cout << "nu exista";
}
