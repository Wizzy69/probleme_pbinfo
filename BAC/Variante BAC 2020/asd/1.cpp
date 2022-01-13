#include <iostream>
using namespace std;

int main()
{
    int a, min;
    cin >> a;

    min = 9;
    do
    {
        if (a % 10 < min)
            min = a % 10;
        a = a / 10;
    } while (a != 0);

    cout << min;
    return 0;
}