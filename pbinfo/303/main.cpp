#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("eratostene.in");
ofstream fout("eratostene.out");
bool a[1000001];
void generare_ciur()
{
    a[0] = a[1] = 1;
    for (int i = 2; i <= 1000; i++)
        if (!a[i])
            for (int j = 2; j * i <= 1000000; j++)
                a[i * j] = 1;
}
int n, x, nr = 0;
int main()
{
    generare_ciur();
    fin >> n;
    for (int i = 1; i <= n; i++)
    {
        fin >> x;
        if (!a[x])
            nr++;
    }
    fout << nr;
    return 0;
}