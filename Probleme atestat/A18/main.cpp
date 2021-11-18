#include <iostream>
using namespace std;

int nrDIV(int k)
{
    int nr = 0;
    int d;
    for (d = 1; d * d < k; d++)
        if (k % d == 0)
            nr += 2;
    if (d * d == k)
        nr++;
    return nr;
}

int main()
{
    int k;
    cin >> k;
    int ok = 0;
    for (int i = 1; ok == 0; i++)
    {
        if (nrDIV(i) == k)
        {
            ok = 1;
            cout << i;
        }
    }
    return 0;
}