#include <iostream>
using namespace std;

int cif(int a, int b)
{
    int nr = 0;
    while (a)
    {
        if (b == a % 10)
            nr++;
        a /= 10;
    }
    return nr;
}

int main()
{
    int ap[10], n;
    cin >> n;
    for (int c = 1; c <= 9; c++)
    {
        int nr = cif(n, c);
        ap[c] = nr;
        if (nr % 2 == 1)
        {
            cout << 0;
            return 0;
        }
    }

    for (int c = 9; c >= 1; c--)
        for (int i = 1; i <= ap[c] / 2; i++)
            cout << c;
    for (int c = 1; c <= 9; c++)
        for (int i = 1; i < ap[c] / 2; i++)
            cout << c;
}