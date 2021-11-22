#include <iostream>
using namespace std;

int sfx(int x)
{

    if ((x / 100) % 10 > (x / 10) % 10 &&
        (x / 10) % 10 > x % 10)
        return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    while (n >= 100)
    {
        if (!sfx(n))
            break;
        n = n / 10;
    }
    if (n < 100)
        cout << "Da";
    else
        cout << "Nu";
    return 0;
}