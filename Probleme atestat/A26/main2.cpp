#include <fstream>
using namespace std;
int nrdiv(int x)
{
    int d, nr = 0;
    for (d = 1; d * d < x; d++)
        if (x % d == 0)
            nr += 2;
    if (d * d == x)
        nr++;
    return nr;
}

int main()
{
    int b[51][51];
    int a[51][51], n, m, nrdivmax = 0;
    ifstream fin("mat.in");
    ofstream fout("mat.out");
    fin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            fin >> a[i][j];
            b[i][j] = nrdiv(a[i][j]);
            if (nrdivmax < b[i][j])
                nrdivmax = b[i][j];
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (b[i][j] == nrdivmax)
                fout << a[i][j] << "\n";
    return 0;
}