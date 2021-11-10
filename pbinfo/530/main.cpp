#include <iostream>
using namespace std;

bool cautare_binara(int a[], int n, int x)
{
    int li, lf, m;
    li = 0;
    lf = n - 1;
    m = lf / 2;
    while (li <= lf)
    {
        if (x < a[m])
            lf = m - 1;
        else if (x > a[m])
            li = m + 1;
        else
            return true;
        m = (li + lf) / 2;
    }
    return false;
}

void intersectie(int a[], int b[], int n, int m, int &k, int c[])
{
    k = 0;
    for (int i = 0; i < n; i++)
        if (cautare_binara(b, m, a[i]))
            c[k++] = a[i];
}

void reuniune(int a[], int b[], int n, int m, int &k, int c[])
{
    k = 0;
    int i, j;
    i = j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else if (a[i] > b[j])
            c[k++] = b[j++];
        else
            c[k++] = a[i], i++, j++;
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = a[i++];
}

int main()
{
    int n, m;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int *b = new int[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int k = 0;
    int *c = new int[n + m];

    reuniune(a, b, n, m, k, c);
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";
    cout << '\n';

    intersectie(a, b, n, m, k, c);
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";
}