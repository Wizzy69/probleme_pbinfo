#include <iostream>
using namespace std;

int cif(int a, int b)
{
    int nr = 0;
    do
    {
        if (a % 10 == b)
            nr++;
        a /= 10;

    } while (a);
    return nr;
}

int verif(int a)
{
    int st = 0, dr = 0, p = 1;
    for (int i = 9; i >= 0; i--)
    {
        int fr = cif(a, i);
        if (fr % 2 == 1)
            return 0;
        while (fr > 0)
        {
            st = st * 10 + i;
            dr = dr + i * p;
            p *= 10;
            fr -= 2;
        }
    }

    return st * 10000 + dr;
}

int main()
{
    int n;
    cin >> n;
    cout << verif(n);
}