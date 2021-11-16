#include <iostream>
using namespace std;

int P(int *a, int n, int k)
{
    int s = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for (int i = n-1; i >= k; --i)
        s += a[i];
    return s;
}