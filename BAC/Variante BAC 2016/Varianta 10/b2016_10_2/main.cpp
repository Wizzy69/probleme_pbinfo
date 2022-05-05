/*
Subiectul 2:
1. a
2. b
3. 3 8 2
4. 11matematica
5.
*/
#include <iostream>
using namespace std;

int main()
{
    int n, a[100][100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        a[i][0] = i + 1;
        a[n - 1][i] = n;
    }

    for (int j = 1; j < n; j++)
        for (int i = 0; i < n - 1; i++)
            a[i][j] = a[i][j - 1] + a[i + 1][j - 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}