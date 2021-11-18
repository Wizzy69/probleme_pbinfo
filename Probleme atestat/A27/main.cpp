#include <iostream>
#include <fstream>
using namespace std;
int n, m, l, c, a[100][100];
void citire()
{
    cin >> n >> m >> l >> c;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
}
void elim_linie(int l)
{
    for (int j = 1; j <= m; j++)
        a[l][j] = a[l + 1][j];
}
void elim_col(int c)
{
    for (int i = 1; i <= n; i++)
        a[i][c] = a[i][c + 1];
}
int main()
{
    citire();
    for (int i = l; i <= n; i++)
        elim_linie(l);
    n--;
    for (int j = c; j <= m; j++)
        elim_col(c);
    m--;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}