#include <iostream>
using namespace std;

int pMin(int a[], int n, int x)
{
    int imin = -1;
    int mini = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] < mini && a[i] >= x)
            imin = i, mini = a[i];

    return imin;
}

int pMax(int a[], int n, int x)
{
    int imax = -1;
    int maxi = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > maxi && a[i] <= x)
            imax = i, maxi = a[i];

    return imax;
}

int main()
{
    int n, t;
    cin >> n >> t;

    int a[200001];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        x = pMin(a, n, x);
        y = pMax(a, n, y);
        if (x == -1)
            cout << 0 << '\n';
        else
            cout << y - x + 1 << '\n';
    }
}