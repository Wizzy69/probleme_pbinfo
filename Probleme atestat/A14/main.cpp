#include <iostream>
#include <fstream>
using namespace std;

void aritmetica(int *a, int n, int &r, int &ok)
{
    ok = 1;
    for (int i = 1; i < n - 1; i++)
    {
        if (2 * a[i + 1] != a[i] + a[i + 2])
        {
            ok = 0;
            return;
        }
    }
    if (ok == 1)
        r = a[2] - a[1];
}

void geometrica(int *a, int n, int &r, int &ok)
{
    ok = 1;
    for (int i = 1; i < n - 1; i++)
        if (a[i + 1] * a[i + 1] != a[i] * a[i + 2])
        {
            ok = 0;
            return;
        }
    if (ok == 1)
        if (a[1] == 0 && a[2] == 0)
            r = 0;
        else
            r = a[2] / a[1];
}

int main()
{
    ifstream fin("progresie.in");
    ofstream fout("progresie.out");
    int n, ok, r, q;
    cin >> n;
    int *a = new int[n + 1];
    for (int i = 1; i <= n; i++)
        fin >> a[i];
    aritmetica(a, n, r, ok);
    if (ok == 1)
        fout << "elementele sunt in progresie aritmetica cu ratia " << r;
    else
    {
        geometrica(a, n, r, ok);
        if (ok == 1)
            fout << "elementele sunt in progresie geometrica cu ratia " << r;
        else
            fout << "elementele nu sunt in progresie";
    }
    return 0;
}