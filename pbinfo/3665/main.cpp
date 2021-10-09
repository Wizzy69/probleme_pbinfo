#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int cp = -1;
    do
    {
        if (n % 2 == 0)
            if (n % 10 > cp)
                cp = n % 10;
        n /= 10;
    } while (n);

    if (cp == -1)
        cout << 10;
    else
        cout << cp;
}