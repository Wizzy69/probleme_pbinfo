#include <iostream>
#include <fstream>
using namespace std;

void cifre(int a, int &b)
{
    b = 0;
    int fr[10], i, ok = 0;
    for (i = 0; i < 10; i++)
        fr[i] = 0;
    while (a > 0)
        fr[a % 10]++, a /= 10;
    if (fr[0])
        ok = 1;
    for (i = 1; i < 10; i++)
        if (fr[i] != 0)
            if (ok)
                b = (b * 10 + i) * 10, ok = 0;
            else
                b = b * 10 + i;
}

int main()
{
    ifstream fin("date.in");
    int n, a, i, exista = 0;
    fin >> n;

    for (i = 0; i < n; i++)
    {
        int nr;
        fin >> a;
        cifre(a, nr);
        if (a == nr)
        {
            cout << a << " ";
            exista = 1;
        }
    }

    if (exista == 0)
        cout << 0;

    return 0;
}