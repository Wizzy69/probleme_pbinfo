#include <iostream>
using namespace std;

int main()
{
    int x, n = 6, x1;
    cin >> x;
    x1 = x;
    int a[10][10];
    int j = 0;
    do
    {
        for (int i = 0; i < n; i++)
        {
            if (i == j)
                a[i][j] = 0;
            else
            {
                a[i][j] = x1 % 10;
                a[j][i] = x1 % 10;
            }
        }
        j++;

        x1 /= 10;
    } while (x1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}