#include <iostream>
#include <cmath>
using namespace std;

int dist(int *a, int n)
{

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
            if (a[i] == a[j])
                return 0;
        if (a[i] > a[i + 1] && a[i] - a[i + 1] == 1)
            return 0;
        if (a[i] < a[i + 1] && a[i + 1] - a[i] == 1)
            return 0;
    }
    return 1;
}
