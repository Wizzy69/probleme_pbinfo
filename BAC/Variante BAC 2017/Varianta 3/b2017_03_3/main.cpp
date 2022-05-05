/*
Subiectul 3:
1. c
2. 1234123121
3.
*/
#include <iostream>
using namespace std;

void identice(int a, int b)
{
    int ok = 0;
    for (int i = a; i <= b; i++)
    {
        int cif_id = 1;
        int aux = i;
        while (aux > 9)
        {
            if (aux % 10 != aux / 10 % 10)
            {
                cif_id = 0;
                break;
            }
            aux /= 10;
        }
        if (cif_id == 1)
        {
            ok = 1;
            cout << i << ' ';
        }
    }
    if (ok == 0)
        cout << "nu exista";
}
