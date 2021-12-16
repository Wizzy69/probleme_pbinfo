#include <iostream>
using namespace std;

void f(int n, int a[], int &k)
{
    int k = 0, ok = 0;
    for (int i = n - 1; i >= 0; i--)
        if (a[i] % 2 == 0)
            k = k * 10 + a[i], ok = 1;
    if (ok == 0)
        k = -1;
}

int main()
{
}