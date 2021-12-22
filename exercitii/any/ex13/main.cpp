/*
    Sa se insereze inaintea ultimei linii o linie formata 
din prima valoare de pe ultima coloana

*/

#include <iostream>
using namespace std;

void f(int a[26][17], int &n, int m)
{
    n++;
    for (int j = 0; j < m; j++)
        a[n - 1][j] = a[n - 2][j],
        a[n - 2][j] = a[0][m - 1];
}