#include <iostream>
using namespace std;

int cmmdc(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    int a[200];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int nr = 0;
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (cmmdc(a[i], a[j]) == 1)
                nr++;

    cout << nr;
}