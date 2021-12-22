//Prelucrarea matricelor
/*
    Sa se scrie functia care furnizeaza prin a[][] matricea obtinuta din a
prin inserarea intre oricare doua linii a unei linii formate
din val minima a intregii matrice
*/

#include <iostream>
#include <fstream>
using namespace std;
void f(int a[][45], int &n, int m)
{
    int vmin = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (vmin > a[i][j])
                vmin = a[i][j];

    for (int i = 0; i < n - 1; i++)
    {
        n++;
        for (int l = n - 1; l > i + 1; l--) //inserez dupa linia i
            for (int j = 0; j < m; j++)     //ultima linie de deplasat in jos este i+1
                a[l][j] = a[l - 1][j];
        for (int j = 0; j < m; j++)
            a[i + 1][j] = vmin;
        i++;
    }
}

int main()
{

    return 0;
}