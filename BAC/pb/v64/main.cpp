#include <iostream>
using namespace std;

int diviz(int n, int *a)
{

    int i, j, nr = 0;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] % a[j] == 0 || a[j] % a[i] == 0)
                nr++;

    return nr;
}

int main()
{

    int n, a[200], i;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << diviz(n, a);

    return 0;
}