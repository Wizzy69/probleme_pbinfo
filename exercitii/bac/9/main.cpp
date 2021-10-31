#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[25][25];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        cout << a[0][i] << " ";
    for (int i = 1; i < n; i++)
        cout << a[i][n - 1] << " ";
    for (int i = n - 2; i >= 0; i--)
        cout << a[n - 1][i] << " ";
    for (int i = n - 2; i >= 0; i--)
        cout << a[i][0] << " ";
}