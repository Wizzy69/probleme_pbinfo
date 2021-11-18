#include <iostream>
using namespace std;

int scif(int x)
{
    if (x < 10)
        return x;
    return x % 10 + scif(x / 10);
}

int verificare(int **a, int n)
{
    int ok = 0;
    for (int i = 1; i < n; i++)
        for (int j = n - i; j < n; j++)
            if (scif(a[i][j]) % 2 == 0)
                return 1;
    return 0;
}

int main()
{
    return 0;
}