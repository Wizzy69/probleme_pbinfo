/*
Subiectul 2:
1. d
2. c
3. 2 3 6
4.
struct masina
{
    int an;
    char carburant[51];
}m;
5.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[20][20];
    for (int i = 0; i < n; i++)
        a[0][i] = n;
    for (int i = 1; i < n; i++)
        a[i][n - 1] = n - i;
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 2; j >= 0; j--)
            a[i][j] = a[i - 1][j] + a[i][j + 1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}