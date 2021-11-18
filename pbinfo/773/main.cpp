#include <iostream>
using namespace std;

pair<int, int> maxLinie(int *v, int m)
{
    int imax, nrap;
    imax = 0;
    nrap = 1;

    for (int i = 1; i < m; ++i)
        if (v[i] > v[imax])
            imax = i, nrap = 1;
        else if (v[i] == v[imax])
            nrap++;
    return make_pair(imax, nrap);
}

int main()
{
    int n, m;
    cin >> n >> m;

    int imax, jmax, nrap;
    imax = jmax = nrap = -1;

    int **a = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[m];
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

        auto maxi = maxLinie(a[i], m);
        int _jmax = maxi.first;
        int _nrap = maxi.second;

        if (imax == -1 ||
            (_nrap > nrap && a[i][_jmax] > a[imax][jmax]) ||
            (a[i][_jmax] > a[imax][jmax] && nrap < _nrap))

            nrap = _nrap, imax = i, jmax = _jmax;
        else if (a[i][_jmax] == a[imax][jmax])
            nrap += _nrap;
    }

    cout << a[imax][jmax];
}