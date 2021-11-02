#include <iostream>
using namespace std;

pair<int, int> MinMax(int a[], int n)
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

    return make_pair(imin, imax);
}

int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto p = MinMax(a, n);

    if (p.first < p.second)
        for (int i = p.first; i <= p.second; ++i)
            cout << a[i] << " ";
    else
        for (int i = p.second; i <= p.first; ++i)
            cout << a[i] << " ";
}