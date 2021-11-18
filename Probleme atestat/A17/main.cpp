#include <iostream>
using namespace std;

int nrdiv(int x)
{
    int nr = 0, d;
    for (d = 1; d * d < x; d++)
        if (x % d == 0)
            nr += 2;
    if (d * d == x)
        nr++;
    return nr;
}


int main()
{
    int n;
    cin >> n;
 
    int ok = 1;
    int nrd = nrdiv(n);
 
    for (int i = 1; i <= n - 1 && ok == 1; i++)
        if (nrdiv(i) >= nrd)
            ok = 0;
 
    if (ok == 1)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}
