#include <iostream>
#include <fstream>

using namespace std;

void citire(int a[], int b[], int &n, int &m)
{
    ifstream fin("interclasare.in");
    fin >> n;
    for (int i = 0; i < n; ++i)
        fin >> a[i];
    fin >> m;
    for (int i = 0; i < m; ++i)
        fin >> b[i];
}

void interclasare(int a[], int b[], int n, int m, int v[], int &VLen)
{
    VLen = 0;
    int i, j;
    i = j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            v[VLen++] = a[i++];
        else if (a[i] > b[j])
            v[VLen++] = b[j++];
        else
        {
            v[VLen++] = a[i++];
            v[VLen++] = b[j++];
        }
    }

    while (i < n)
        v[VLen++] = a[i++];
    while (j < m)
        v[VLen++] = b[j++];
}

int main()
{

    int n, m, k;
    int a[100000], b[100000], v[200000];

    citire(a, b, n, m);
    interclasare(a, b, n, m, v, k);
    ofstream fout("interclasare.out");
    for (int i = 0; i < k; ++i)
    {
        if (i % 10 == 0 && i > 0)
            fout << '\n';
        fout << v[i] << " ";
    }
}