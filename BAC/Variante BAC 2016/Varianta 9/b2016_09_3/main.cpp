/*
Subiectul 3:
1. b
2. CRETA  CRTAE
3.
*/
#include <iostream>
using namespace std;

void duplicare(int n, int &d)
{
    int nr = 0, cpn = n, p = 1;
    do
    {
        if (n % 2 == 0)
            nr = n % 10 * p + nr,
            p *= 10,
            nr = n % 10 * p + nr;
        else
            nr = n % 10 * p + nr;
        p *= 10;
        n /= 10;
    } while (n);
    if (nr == cpn)
        d = -1;
    else
        d = nr;
}

int main()
{
    int n, d;
    cin >> n;
    duplicare(n, d);
    cout << d;
    return 0;
}