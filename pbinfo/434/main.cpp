#include <iostream>
using namespace std;

bool prim(int x)
{
    if (x == 2)
        return true;
    if (x < 2 || x % 2 == 0)
        return false;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int n, x = 3, y = 5;
    cin >> n;
    while (n)
    {
        if (prim(x) && prim(y))
        {
            cout << x << " " << y << '\n';
            n--;
        }
        x += 2;
        y += 2;
    }
    return 0;
}