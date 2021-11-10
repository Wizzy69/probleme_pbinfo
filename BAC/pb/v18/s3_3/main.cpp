#include <iostream>
using namespace std;

int count(double a[100], int n)
{
    int nr = 0;
    double s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];

    s = double(double((s * (s + 1))) / n);

    for (int i = 0; i < n; i++)
        if (a[i] >= s)
            nr++;

    return nr;
}
