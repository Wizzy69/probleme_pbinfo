#include <iostream>
#include <fstream>

using namespace std;

void sterge(int v[], int &n, int i, int j)
{
    int i2 = i;
    for (int k = j + 1; k <= n; k++)
    {
        v[i2] = v[k];
        i2++;
    }
    n = n - (j - i - 1);
}

void citire(int v[101], int &n)
{
    ifstream fin("NUMERE.IN");
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> v[i];
}

int main()
{
    int n;
    int v[101];
    citire(v, n);
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (v[i] == v[j] && j < n)
            j++;
        if (i != j)
            sterge(v, n, i + 1, j);
    }
    return 0;
}