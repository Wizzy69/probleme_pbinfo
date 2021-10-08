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

int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b && a == 0)
        cout << -1;
    else
        cout << cmmdc(a, b);
}
