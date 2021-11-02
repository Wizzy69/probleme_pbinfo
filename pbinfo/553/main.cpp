#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int imin, imax;
    imin = imax = 1;

    int _max, _min;
    _max = _min = a[1];

    for (int i = 2; i <= n; ++i)
    {
        if (a[i] < _min)
            _min = a[i], imin = i;
        if (a[i] > _max)
            _max = a[i], imax = i;
    }

    cout << imin << " " << imax;
}