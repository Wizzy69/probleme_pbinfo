#include <iostream>
using namespace std;

pair<pair<int, int>, pair<int, int>> MinMax(int a[], int n)
{
    int imin, imax;
    imin = imax = 0;

    int _max, _min;
    _max = _min = a[0];

    for (int i = 1; i < n; ++i)
    {
        if (a[i] < _min)
            _min = a[i], imin = i;
        else if (a[i] > _max)
            _max = a[i], imax = i;
    }

    return make_pair(make_pair(imin, _min), make_pair(imax, _max));
}

int main()
{
    int nr = 0;
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    auto res = MinMax(a, n);
    // Stiu ca nu trebuia sa fac cu asa de multe
    // perechi dar am vrut sa testez cum functioneaza :)

    auto pmin = res.first;
    auto pmax = res.second;

    // cout << "Valoarea minima ( " << pmin.second << " ) se afla la indicele " << pmin.first + 1 << '\n';
    // cout << "Valoarea maxima ( " << pmax.second << " ) se afla la indicele " << pmax.first + 1 << '\n';

    int x = pmax.second - pmin.second;

    for (int i = 0; i < n; ++i)
        if (a[i] == x)
            nr++;
    cout << nr;
}