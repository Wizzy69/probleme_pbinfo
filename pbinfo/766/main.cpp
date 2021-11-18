#include <iostream>
using namespace std;

int nrElemPare(int *a, int m)
{
    int nr = 0;
    for (int i = 0; i < m; ++i)
        if (a[i] % 2 == 0)
            nr++;
    return nr;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **a = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[m + 1];
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
        a[i][m] = nrElemPare(a[i], m);
    }
    int k = 0;
    int *b = (int *)calloc(100, sizeof(int));
    int maxp = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i][m] > maxp)
        {
            maxp = a[i][m];
            k = 0;
            b[k++] = i;
        }
        else if (a[i][m] == maxp)
            b[k++] = i;
    }
    for (int i = 0; i < k; ++i)
        cout << (b[i] + 1) << " ";
}