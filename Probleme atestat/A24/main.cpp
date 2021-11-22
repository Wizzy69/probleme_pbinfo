#include <iostream>
#include <fstream>
using namespace std;

void citire(int **a, int &n, int &m, const char *numeF)
{
    ifstream fin(numeF);
    fin >> n;
    a = new int *[n + 1];
    for (int i = 1; i <= n; i++)
    {
        a[i] = new int[n + 1];
        for (int j = 1; j <= n; j++)
            fin >> a[i][j];
    }
    fin.close();
}

void afisare(int **a, int n, int m, const char *numeF)
{
    ofstream fout(numeF);
    if (n == -100)
    {
        fout << "imposibil";
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }
    fout.close();
}
void produs(int **a, int n, int m, int **b, int n2, int m2, int **c)
{
    c = (int **)malloc(n * sizeof(int *));
    for (int i = 1; i < n; i++)
        c[i] = (int *)calloc(m2, sizeof(int));

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m2; j++)
            for (int k = 1; k <= m; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
}

int main()
{
    int **a, **b, **c;
    int n, m;
    int n2, m2;
    citire(a, n, m, "mat.in");
    citire(b, n2, m2, "mat2.in");
    if (n != m2)
    {
        afisare(c, -100, -100, "mat.out");
        return 0;
    }
    produs(a, n, m, b, n2, m2, c);
    afisare(c, n, m, "mat.out");
    return 0;
}