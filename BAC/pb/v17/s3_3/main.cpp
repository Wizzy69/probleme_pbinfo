#include <iostream>
using namespace std;
int interval(int a[100], int n)
{
    int nr = 0;
    for (int i = 0; i < n; i++)
        if ((a[0] < a[n - 1] && a[i] >= a[0] && a[i] <= a[n - 1]) ||
            (a[0] >= a[n - 1] && a[i] <= a[0] && a[i] >= a[n - 1]))
            nr++;
    return nr;
}
