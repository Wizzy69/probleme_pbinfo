#include <iostream>
using namespace std;

int divxy(int x, int y)
{
    if (x % y == 0 || y % x == 0)
        return 1;
    return 0;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    int ok = 0;
    if (a < b)
        swap(a, b);
    for (int i = a; i <= b; i++)
        if (divxy(i, n) == 1 && i<n)
        {
            ok = 1;
            cout << i << " ";
        }

    if (ok == 0)
        cout << "NU";
}