#include <iostream>
using namespace std;

long cmmdc(long a, long b)
{
    while (b)
    {
        int r = a % b;
        b = a;
        a = r;
    }
    return a;
}
long calcul(int n, long a[10000])
{
    long c = cmmdc(a[1], a[2]);
    for (int i = 3; i <= n; i++)
        c = cmmdc(c, a[i]);
    return c;
}
void main()
{
    int n, i;
    long a[10000];
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];
    cout << calcul(n, a);
}