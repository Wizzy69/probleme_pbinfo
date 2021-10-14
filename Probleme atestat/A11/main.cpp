#include <iostream>
#include <fstream>
using namespace std;
void citire(int &n, int a[])
{
    ifstream fin("sort.in");
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> a[i];
}

void numarare(int n, int a[])
{
    int c[51], b[51] = {0};

    for (int i = 0; i < n; i++)
        c[i] = a[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                b[i]++;
            else
                b[j]++;

    for (int i = 0; i < n; i++)
        a[b[i]] = c[i];

}

void afisare(int n, int v[])
{
    ofstream fout("sort.out");
    for (int i = 0; i < n; i++)
        fout << v[i];
}

int main()
{
    int n, v[51];
    citire(n, v);
    numarare(n, v);
    afisare(n, v);
    return 0;
}