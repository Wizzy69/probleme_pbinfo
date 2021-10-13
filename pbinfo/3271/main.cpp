#include <iostream>
using namespace std;

int cmmdc(int a, int b)
{
    int ca = a, cb = b;
    while (b > 1)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    if (ca % a == cb % a)
        return a;
    return 1;
}

int main()
{
    int n, a1, b1, s, maxi;
    s = maxi = a1 = b1 = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        int c = cmmdc(a, b);
        if (c > maxi)
        {
            maxi = c;
            a1 = a;
            b1 = b;
        }
        else if (c == maxi && a + b > s)
        {
            s = a + b;
            a1 = a;
            b1 = a;
        }
    }
    cout << a1 << ' ' << b1;
    return 0;
}