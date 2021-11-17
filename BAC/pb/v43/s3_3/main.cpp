#include <iostream>
using namespace std;

int P(int n, int *a)
{
    int s = 0;
    for (int i = 2; i <= n ;++i)
    {
        if(a[i]%2==1)
            s += a[i];
    }
    return s;
}