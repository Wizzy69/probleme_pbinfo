#include <iostream>
using namespace std;

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
}

int cb(int a[], int n, int s, int f)
{

    int li, lf, m, nr = 0;
    li = 1;
    lf = n;
    m = (li + lf) / 2;
    while (li <= lf && a[m] != x)
    {
        if (x < a[m])
            lf = m - 1;
        else
            li = m + 1;
        m = (li + lf) / 2;
    }
}

int main()
{
    int n, T;
    cin >> n >> T;
    int a[1000];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, n);
    for (int i = 0; i < T; ++i)
    {
        int x, y;
        cin >> x >> y;
        if (x > a[n - 1])
            cout << "0\n";
        else
    }
}