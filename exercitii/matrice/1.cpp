/*
    Sa se stearga toate coloanele care contin valori
cu cifrele distincte
*/

#include <iostream>
using namespace std;

bool cifre_distincte(int x)
{
    int fr[10] = {0};
    do
    {
        fr[x % 10]++;
        x /= 10;
    } while (x);

    for (int i = 0; i < 10; i++)
        if (fr[i] > 1)
            return false;
    return true;
}

void stergCol(int a[35][35], int n, int m, int c)
{
    for (int j = c; j < m - 1; j++)
        for (int i = 0; i < n; i++)
            a[i][j] = a[i][j + 1];
}

int main()
{
    int a[35][35];
    int n, m;
    cin >> n >> m;
  
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (cifre_distincte(a[i][j]))
            {
                stergCol(a, n, m, j);
                m--;
                j--;
            }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}