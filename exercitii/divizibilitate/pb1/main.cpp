#include <iostream>
using namespace std;

bool sdiv(int n)
{
    int s = 0;
    int d;
    for (d = 1; d * d < n; d++)
        if (n % d == 0)
            s = s + n / d + d;
    if (d * d == n)
        s += d;

    return n == s - n;
}

int main()
{
    cout << sdiv(6);
}
