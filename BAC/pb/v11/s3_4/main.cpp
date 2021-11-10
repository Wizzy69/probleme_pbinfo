#include <iostream>
using namespace std;

int sum(int x);

int main()
{
    int nr = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int x;
        cin >> x;
        if(sum(x) == x+1)
            nr++;
    }

    cout << nr;
}

int sum(int x)
{
    int s = 0;
    int d;
    for (d = 1; d * d < x; d++)
        if (x % d == 0)
            s += d + x / d;
    if (d * d == x)
        s += d;
    return s;
}
