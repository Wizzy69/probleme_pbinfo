#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100][100];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 1)
                a[i][j] = i + j;
            else
            {
                if (j==1)
                    a[i][j] = a[i - 1][j];
                else
                    a[i][j] = a[i - 1][j - 1];
            }
        }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}