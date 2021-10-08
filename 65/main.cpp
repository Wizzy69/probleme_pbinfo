#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int p = 1;
    bool are = false;
    do
    {
        if (x % 2 == 1)
        {
            are = true;
            p *= x % 10;
        }
        x /= 10;
    } while (x);

    if (are)
        cout << p;
    else
        cout << -1;
}