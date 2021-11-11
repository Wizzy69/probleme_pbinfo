#include <iostream>
using namespace std;

int caut_bin(int a[], int sp[], int n, int sum)
{
    int imax, st = 1, dr = n;
    while (st <= dr)
    {
        int mij = (st + dr) / 2;
        if (sp[mij] <= sum)
        {
            imax = mij;
            st = mij + 1;
        }
        else
            dr = mij - 1;
    }

    return imax;
}

int main()
{
    int n, a[1000], sp[1000] = {0}, suma;
    cin >> n >> suma;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sp[i] = sp[i - 1] + a[i];
    }

    cout << caut_bin(a, sp, n, suma);
    return 0;
}