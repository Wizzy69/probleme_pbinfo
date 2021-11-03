#include <iostream>
using namespace std;

pair<bool, int> pp(int x)
{
    int d = 1;
    while (d * d < x)
        d++;

    return make_pair(d * d == x, d);
}

int main()
{
    int n;
    cin >> n;

    int a[50];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        auto val = pp(x);
        a[i] = val.second;
        a[i + val.first] = x;
        i += val.first;
        n += val.first;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}