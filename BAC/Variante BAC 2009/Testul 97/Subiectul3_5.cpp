#include <iostream>
using namespace std;

int main()
{
    int n, m, a[24][24], i, j;
    cin >> n >> m;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> a[i][j];

    for (j = 0; j < m; j++)
        for (i = 0; i < n / 2; i++)
        {
            int aux = a[i][j];
            a[i][j] = a[n - 1 - i][j];
            a[n - 1 - i][j] = aux;
        }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}