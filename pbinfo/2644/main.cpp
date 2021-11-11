#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("clase.in");
ofstream fout("clase.out");

bool cautare_binara(long long *v, long long n, long long x)
{
    long long li, lf, m;
    li = 0;
    lf = n - 1;
    m = lf / 2;
    while (li <= lf)
    {
        if (x < v[m])
            lf = m - 1;
        else if (x > v[m])
            li = m + 1;
        else
            return true;
        m = (li + lf) / 2;
    }
    return false;
}

int main()
{
    long long m, n;
    long long nr = 0;

    fin >> n;
    long long *x = new long long[n];

    for (long long i = 0; i < n; i++)
        fin >> x[i];

    fin >> m;
    for (long long i = 0; i < m; i++)
    {
        long long y;
        fin >> y;
        if (cautare_binara(x, n, y))
            nr++;
    }

    fout << nr;
    return 0;
}
