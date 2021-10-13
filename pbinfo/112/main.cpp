#include <iostream>
using namespace std;

int main()
{
    int x;
    int min = 9999999999;
    int max = -9999999999;
    int a, b;

    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int n;
        cin >> n;
        if (n < min)
            min = n;
        if (n > max)
            max = n;
    }
    a = max;
    b = min;
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << min / a << "/" << max / a;
    return 0;
}