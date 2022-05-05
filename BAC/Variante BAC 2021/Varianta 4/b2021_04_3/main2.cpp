#include <iostream>
using namespace std;

int main()
{
    int n, k, a[100][100];
    cin >> k >> n;
    for (int i = 0; i <= n; i++)
        a[i][i] = k * (i+1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i > j)
                a[i][j] = a[i][j + 1] - 1;
            else if (i < j)
                a[i][j] = a[i][j-1] + 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}