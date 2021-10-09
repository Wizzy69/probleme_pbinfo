#include <iostream>
using namespace std;

int f(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return -1;
    return 1 - 2 * f(n - 1) - f(n - 2);
}

int main()
{
    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
        cout << f(i) << " ";
}