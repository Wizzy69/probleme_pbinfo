#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[21][21];
    int d = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 1)
            {
                a[i][j] = d;
            }
            else if (j == 1)
                a[i][1] = 1;
            else
            {
                a[i][j] = a[i][j - 1] + 1;
            }
        }
        if (i % 2 == 1)
            d += 2;
    }

        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}