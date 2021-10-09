#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int n1, n2;
    n1 = n2 = 0;

    int p1, p2;
    p1 = p2 = 1;

    do
    {
        if (n % 2 == 0)
        {
            n1 = n % 10 * p1 + n1;
            p1 *= 10;
        }
        else
        {
            n2 = n % 10 * p2 + n2;
            p2 *= 10;
        }
        n /= 10;
    } while (n);

    if (n2 < n1)
        cout << n1 - n2;
    else
        cout << n2 - n1;
}