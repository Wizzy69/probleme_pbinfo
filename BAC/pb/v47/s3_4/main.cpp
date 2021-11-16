#include <iostream>
using namespace std;
void cif(int nr, int &s);

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int smax = 0;
    for (int i = 0; i < n; ++i)
    {
        int s;
        cif(a[i], s);
        if (s > smax)
            smax = s;
    }

    for (int i = 0; i < n; ++i)
    {
        int s;
        cif(a[i], s);
        if (s == smax)
            cout << a[i] << " ";
    }
    return 0;
}

void cif(int nr, int &s)
{
    s = 0;
    while (nr)
        s += nr % 10, nr /= 10;
}