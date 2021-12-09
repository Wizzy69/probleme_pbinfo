/*
    a[0][0]  a[0][1] .... a[0][m-2] a[0][m-1]
    a[1][0]  a[1][1] .... a[1][m-2] a[1][m-1]
    .
    .
    .
    a[n-1][0]  a[n-1][1] .... a[n-1][m-2] a[n-1][m-1]


    Elementele unei linii:

    a[l][0]  a[l][1] .... a[l][m-1]

    for(int z = 0; z < m; z++)
        cout << a[l][z] << " ";
    
    Prelucrarea unei coloane
    a[0][c]  a[1][c]  a[2][c] ... a[n-1][c]

    for(int t=0;t<n;t++)
        cout << a[t][c] << " ";
    

    Algoritmi elementari:
        - suma
        - preodus
        - numarare
        - media
        - min
        - max
        - prelucrarea perechilor de valori de pe o linie/coloana
        - prelucrarea perechilor de valori alaturate de pe o linie/coloana
        - prelucrarea elementelor de pe conturul matricei
        - prelucrarea dreptunghiurilor concentrice
        - sortarea liniilor / coloanelor cu bule, interschimbare
        - rotirea matricei la stanga sau la dreapta
        - interschimbarea a doua linii / coloane
        - stergerea liniilor / coloanelor
        - inserarea de linii / coloane
        - construirea matricelor in memorie

    Problema:
        2 <= n,m <= 30
    Determinati valoarea minima din matrice.
    Stergeti linia si coloana acestui element.

*/
#include <iostream>
using namespace std;
void citire();
void afisare();
int valmin(int a[][35], int n, int m)
{
    int vmin = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (vmin > a[i][j])
                vmin = a[i][j];
    return vmin;
}

void stergere(int &n, int &m, int &lmin, int &cmin, int a[][35])
{
    for (int i = lmin; i < n - 1; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = a[i + 1][j];
    n--;

    for (int j = cmin; j < m - 1; j++)
        for (int i = 0; i < n; i++)
            a[i][j] = a[i][j + 1];
    m--;
}

void valori(int &vmin, int &lmin, int &cmin, int n, int m, int a[][35])
{
    vmin = a[0][0];
    lmin = cmin = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (vmin > a[i][j])
                vmin = a[i][j], lmin = i, cmin = j;
}

int a[35][35];
int n, m;
int main()
{
    citire(); // nu am mai scris
    int vmin, lmin, cmin;
    valori(vmin, lmin, cmin, n, m, a);
    stergere(n, m, lmin, cmin, a);
    afisare(); // nu am mai scris
}