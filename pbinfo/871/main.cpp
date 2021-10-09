#include <iostream>
using namespace std;

int F(int n, int c1, int c2)
{
    if (n < 10)
    {
        if (n == c1)
            return c2;
        return n;
    }

    if (n % 10 == c1)
        return F(n / 10, c1, c2) * 10 + c2;
    return F(n / 10, c1, c2) * 10 + n % 10;
}

int main()
{
    int n;
    int c1, c2;
    cin >> n >> c1 >> c2;

    cout << F(n, c1, c2);
}