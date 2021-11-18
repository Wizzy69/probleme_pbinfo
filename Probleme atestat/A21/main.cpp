#include <iostream>
#include <fstream>
using namespace std;

bool prim(int x)
{
    if (x < 2 || x > 2 && x % 2 == 0)
        return false;
    for (int d = 3; d * d <= x; d += 2)
        if (x % d == 0)
            return false;
    return true;
}

int suma(int **a, int n)
{
    int s;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (prim(a[i][j]))
                s += a[i][j];
    return s;
}

int main()
{
    ifstream fin("mat.in");
    int n;
    fin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }
    cout << suma(a, n);
}