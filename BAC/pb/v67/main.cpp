#include <iostream>
using namespace std;

int calcul(int n, int *a)
{

    int nr = n, i;
    for (i = 0; i < n; i++)
    {
        int d;
        for (d = 2; d * d < a[i]; d++)
            if (a[i] % d == 0)
            {
                nr--;
                break;
            }
    }

    return nr;
}

int main()
{

    int n, a[10000], i;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << calcul(n, a);
}