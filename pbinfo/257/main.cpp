#include <iostream>
using namespace std;

int fibo(int n)
{
    int z, x, y;
    x = 1, y = 1;
    while (x + y <= n)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return y;
}

int main()
{
    int n;
    cin >> n;
    while (n)
    {
        cout << fibo(n) << " ";
        n -= fibo(n);
    }
    return 0;
}