#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, f1, f2;
    cin >> f1 >> f2 >> n;
    int f3;
    while (abs(f1) <= n)
    {
        cout << f1 << " ";
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
}