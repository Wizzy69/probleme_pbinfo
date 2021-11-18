#include <iostream>
#include <climits>

using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int *a = (int *)malloc(sizeof(int) * n);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int st = 1;
    int dr = n + 1;
    int min = INT_MAX;
    int mij = (st + dr) / 2;
    while (st <= dr)
    {
        int val = 0;
        for (int i = 1; i <= n; ++i)
            val += mij / a[i];
        if (val >= p)
        {
            if (mij < min)
                min = mij;
            dr = mij - 1;
        }
        else
            st = mij + 1;
        mij = (st + dr) / 2;
    }
    cout << min;
    return 0;
}