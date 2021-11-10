#include <iostream>
using namespace std;

bool cautare_binara(int v[], int l, int e)
{
    int li, lf, m;
    li = 1;
    lf = l;
    m = (li + lf) / 2;
    while (li <= lf)
    {
        if (e < v[m])
            lf = m - 1;
        else if (e > v[m])
            li = m + 1;
        else
            return true;
        m = (li + lf) / 2;
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n;++i)
        cin >> a[i];

    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < m;++i)
        cin >> b[i];

    for (int i = 0; i < m;++i)
        cout << cautare_binara(a, n, b[i]) << " ";
}