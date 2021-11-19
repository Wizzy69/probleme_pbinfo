#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a[51][51], n, m, l, c;
    ifstream fin("mat.in");
    fin >> n >> m >> l >> c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    for (int i = l; i < n - 1; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = a[i + 1][j];
    n--;

    for (int j = c; j < m - 1; j++)
        for (int i = 0; i < n; i++)
            a[i][j] = a[i][j + 1];
    m--;
    ofstream fout("mat.out");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }

    return 0;
}


void stergL(int a[51][51], int &n, int l, int m)
{
    for (int i = l; i <= n - 2;i++)
        for (int j = 0; j < m;j++)
            a[i][j] = a[i + 1][j];
    n--;
}