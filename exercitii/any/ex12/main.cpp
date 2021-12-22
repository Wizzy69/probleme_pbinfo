/*
    Inserarea inaintea unei linii:
    Sa se scrie functia care insereaza inaintea primei linii o linie noua 
formata din valoarea -3.
*/

#include <iostream>
using namespace std;

void f(int a[21][20], int &n, int m)
{
    n++;
    for (int i = n - 1; i > 0;i--)
        for (int j = 0; j < m;j++)
            a[i][j] = a[i - i][j];

    for (int j = 0; j < m;j++)
        a[0][j] = -3;

}
