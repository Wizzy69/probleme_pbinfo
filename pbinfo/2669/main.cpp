#include <iostream>
using namespace std;

int scif(int x)
{
    int s = 0;
    do
    {
        s += x % 10;
        x /= 10;
    } while (x);
    return s;
}

int main()
{
    int n, nr = 0, maxi = 0;
    cin >> n;
    int x;
    int v[82] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        int s = scif(x);
        if (s > maxi)
            maxi = s;
        v[s]++;
    }
    int nr = 0;
    for (int i = 0; i < maxi; i++)
        nr += (v[i] * (v[i] - 1)) / 2;

    cout << nr;

    /*
    int *v = new int[n + 1];
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        for (int j = 0; j < i; ++j)
            if (scif(v[i]) == scif(v[j]))
                nr++;
    }
    cout << nr;
    */
    return 0;
}