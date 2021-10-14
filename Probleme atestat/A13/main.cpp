#include <fstream>
#include <iostream>
using namespace std;
int nrDiv(int n)
{
    int nr = 0;
    int d;
    for (d = 1; d * d < n; d++)
        if (n % d == 0)
            nr += 2;
    if (d * d == n)
        nr++;
    return nr;
}

void citire(int &n, int v[])
{
    ifstream fin("exista.in");
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> v[i];
}

int main()
{
    int n, v[100];
    citire(n, v);
    for (int i = 0; i < n - 2; i++)
    {
        if (nrDiv(v[i]) == nrDiv(v[i + 1]) && nrDiv(v[i]) == nrDiv(v[i + 2]))
        {
            cout << "Da";
            n = -1;
            break;
        }
    }
    if (n == -1)
        cout << "Nu";
}