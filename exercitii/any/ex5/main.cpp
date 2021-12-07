#include <iostream>
#include <fstream>
using namespace std;
int cb(int a[], int n, int x)
{
    int st = n - 1;
    int dr = 0;
    int mij = (st + dr) / 2;
    while (st <= dr)
    {
        if (a[mij] == x)
            return mij;
        if (a[mij] > x)
            dr = mij - 1;
        else
            st = mij + 1;
        mij = (st + dr) / 2;
    }

    return st;
}
int main()
{
    ifstream fin("bac.in");
    int n, m;
    int a[100];
    int x;
    fin >> n >> m;
    for (int i = 0; i < n; i++)
        fin >> a[i];
    for (int i = 0; i < m; i++)
    {
        fin >> x;
        cout << x << " " << cb(a, n, x) - 1;
    }
    return 0;
}