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
    int a, b, n = 0;
    cin >> a;
    while (a)
    {
        cin >> b;
        if (cmmdc(a, b) == 1)
            n++;
        a = b;
    }
    cout << n;
}
