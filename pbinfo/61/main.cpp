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
    int a, b, cmd;

    cin >> a;
    cin >> b;
    cmd = cmmdc(a, b);

    cout << 1 << ' ';
    for (int d = 2; d <= cmd / 2; d++)
        if (cmd % d == 0)
            cout << d << ' ';
    if (cmd > 1)
        cout << cmd;

    return 0;
}