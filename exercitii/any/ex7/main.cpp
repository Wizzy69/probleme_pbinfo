/**Se da o matrice cu n linii si m coloane, 2<=n<=34 si 3<=m<=45. Afisati
a.	Numarul valorilor cu cifre distinct de pe fiecare linie
b.	Suma valorilor care devin prime prin eliminarea cifrei minine de pe fiecare coloana.
c.	Produsul elementelor care au cifrele impare distincte.
d.	Cel mai mare numar de pe fiecare linie.
e.	Cel mai mic numar de pe fiecare coloana.
f.	Suma indicilor liniilor care au elemntele ordonate crescator
g.	Produsul indicilor coloanelor care au toate valorile impare.*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("mat.in");
void citire(int a[35][45], int n, int m)
{
    fin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            fin >> a[i][j];
}
int cif_distincte(int x)
{
    int fr[10] = {0};
    while (x)
    {
        fr[x % 10]++;
        x /= 10;
    }
    for (int i = 0; i <= 9; i++)
        if (fr[i] > 1)
            return 0;
    return 1;
}
void a(int a[35][45], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int nr = 0;
        for (int j = 0; j < m; j++)
            if (cif_distincte(a[i][j]) == 1)
                nr++;
        cout << "Pe linia " << i << " sunt " << nr << " numere cu cifre distincte.";
    }
}
int elim_cif_min(int x)
{
    int a = 10;
    int aux = x;
    do
    {
        if (aux % 10 < a)
            a = aux % 10;
        aux /= 10;
    } while (aux);
    int newnr = 0, p = 1;
    do
    {
        if (x % 10 != a)
        {
            newnr = newnr + p * (x % 10);
            p *= 10;
        }
        x /= 10;
    } while (x);
    return newnr;
}
int prim(int x)
{
    if (x < 2 || x > 2 && x % 2 == 0)
        return 0;
    for (int d = 3; d * d <= x; d += 2)
        if (x % d == 0)
            return 0;
    return 1;
}
void b(int a[35][45], int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            int nr = elim_cif_min(a[i][j]);
            if (prim(nr) == 1)
                s += nr;
        }
        cout << "Pe coloana " << j << " suma elementelor care au prop este " << s;
    }
}
int cifdistimp(int x)
{
    int fr[10] = {0};
    do
    {
        if (x % 2 == 1)
            fr[x % 10]++;
        x /= 10;
    } while (x);
    for (int i = 1; i < 10; i += 2)
        if (fr[i] > 1)
            return 0;
    return 1;
}
void c(int a[35][45], int n, int m)
{
    long long p = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (cifdistimp(a[i][j]) == 1)
                p *= a[i][j];
        }
    }
    cout << "produsul este " << p;
}
void d(int a[35][45], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        int maxi = -1;
        for (int j = 0; j < m; j++)
            if (a[i][j] > maxi)
                maxi = a[i][j];
        cout << "numarul maxim de pe linia " << i << " este " << maxi;
    }
}
void e(int a[35][45], int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        int mini = 1000000000;
        for (int i = 0; i < m; i++)
            if (a[i][j] < mini)
                mini = a[i][j];
        cout << "numarul maxim de pe coloana " << j << " este " << mini;
    }
}
void f(int a[35][45], int n, int m)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int ok = 1;
        for (int j = 0; j < m - 1; j++)
            if (a[i][j] > a[i][j + 1])
            {
                ok = 0;
                break;
            }
        if (ok == 1)
            s += i;
    }
    cout << "suma indicilor liniilor care au elementele ordonate crescator este " << s;
}
void g(int a[35][45], int n, int m)
{
    int p = 1;
    for (int j = 0; j < m; j++)
    {
        int ok = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] % 2 == 0)
            {
                ok = 0;
                break;
            }
        }
        p *= j;
    }
    cout << "Produsul indicilor coloanelor care au toate valorile impare este " << p;
}
int main()
{

    return 0;
}
