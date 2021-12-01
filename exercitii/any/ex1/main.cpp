/*
bac.in -> nr nat de max 9 cif
scoti cifrele pare -> nr prim ? 
*/

#include <iostream>
#include <fstream>

using namespace std;

bool prim(int a)
{
    if (a < 2 || a > 2 && a % 2 == 0)
        return false;
    for (int d = 3; d * d <= a; d += 2)
        if (a % d == 0)
            return false;
    return true;
}

int elimcifImpare(int x)
{
    int p = 1, aux = 0;
    while (x)
    {
        if (x % 2 == 0)
        {
            aux = (p * (x % 10)) + aux;
            p *= 10;
        }
        x /= 10;
    }

    return aux;
}
int a[100005], n;
int main()
{
    int x;
    ifstream fin("bac.in");
    while (fin >> x)
        a[n++] = x;

    int lc = 0, ic = 0, ok = 0;
    for (int i = 0; i < n; i++)
        if (prim(elimcifImpare(a[i])))
            lc++;
        else
        {
            if (lc >= 3)
            {
                for (int j = ic; j < ic + lc; j++)
                    cout << a[j] << " ";
                cout << '\n';
                ok = 1;
            }
            lc = 0;
            ic = i + 1;
        }
    if (lc >= 3)
    {
        for (int i = ic; i < ic + lc; i++)
            cout << a[i] << " ";
        cout << '\n';
        ok = 1;
    }
    if (ok == 0)
        cout << "fara";
    return 0;
}