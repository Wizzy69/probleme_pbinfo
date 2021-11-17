#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("combinari.in");
ofstream fout("combinari.out");
int n, k, x[30];

void tipar()
{
    for (int i = 1; i <= k; i++)
        fout << x[i] << " ";
    fout << "\n";
}

void bkt(int m)
{
    for (x[m] = x[m - 1] + 1; x[m] <= n - k + m; x[m]++)
        if (m == k)
            tipar();
        else
            bkt(m + 1);
}

int main()
{
    fin >> n >> k;
    bkt(1);
    return 0;
}
