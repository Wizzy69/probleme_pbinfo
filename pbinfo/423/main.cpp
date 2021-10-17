#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1, b = 1, c;
    while (a <= n)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}