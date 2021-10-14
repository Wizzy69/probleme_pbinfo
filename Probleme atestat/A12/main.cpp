#include <iostream>
#include <fstream>
using namespace std;

int cmmdc(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void citire(int &n, int a[])
{
    ifstream fin("cmmdc.in");
    fin >> n;

    for (int i = 0; i < n; i++)
        fin >> a[i];
}

int cmmdcGeneral(int n, int v[])
{
    int x = cmmdc(v[0], v[1]);
    for (int i = 2; i < n; i++)
        x = cmmdc(x, v[i]);
    return x;
}

int main()
{
    int n, v[100];
    citire(n, v);
    ofstream fout("cmmdc.out");
    fout << cmmdcGeneral(n, v);
}