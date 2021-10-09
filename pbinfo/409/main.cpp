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

int oglindit(int x)
{
    int og = 0;
    do
    {
        og = og * 10 + x % 10;
        x /= 10;
    } while (x);

    return og;
}
int main()
{
    int nr = 0;
    int n;
    int a;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (cmmdc(a, oglindit(a)) == 1)
            nr++;
    }
    cout << nr;
}
