#include <iostream>
#include <fstream>
using namespace std;

// functie care verifica daca un element este pe linia sa si minim
// pe coloana sa; este max pe linia l si min pe col c

int minmax(int a[51][51], int n, int m, int l, int c)
{
    for (int i = 0; i < m; i++)
        if (a[l][i] > a[l][c]) // elm mai mare decat el => 0
            return 0;
    for (int i = 0; i < n; i++)
        if (a[l][c] < a[i][c]) // elm mai mic => 0
            return 0;
    return 1;
}

int main()
{
    ifstream fin("mat.in");
    ofstream fout("mat.out");
 
    int n, m;
    int a[51][51];
    fin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; ++j)
            fin >> a[i][j];
 
    int ok = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (minmax(a, n, m, i, j) == 1)
            {
                ok = 1;
                fout << a[i][j] << '\n';
            }
 
    if (ok == 0)
        fout << "nu exista";
    return 0;
}