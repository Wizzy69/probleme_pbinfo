#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    cout << s;
}