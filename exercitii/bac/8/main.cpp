#include <iostream>
using namespace std;

int main()
{
    int n, p, a[20][20];
    cin >> n >> p;
    int d = 1;
    int i, j;
    i = j = 0;
    while (i < n)
    {
        if (j == p)
            i++, j = 0;
        a[i][j] = d * d;
        j++;
        d += 2;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}