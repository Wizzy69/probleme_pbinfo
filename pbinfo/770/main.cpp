#include <iostream>
using namespace std;

void permutare(int *a, int m)
{
    int x = a[0];
    for (int i = 0; i < m; i++)
        a[i] = a[i + 1];
    a[m - 1] = x;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[m];
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < n; i++)
        permutare(a[i], m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}