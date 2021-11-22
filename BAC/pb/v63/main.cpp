#include <iostream>
using namespace std;

int verif(int x)
{

    while (x >= 100)
    {
        if (x % 2 == 1 &&
            (x / 10) % 2 == 1 &&
            (x / 100) % 2 == 1)
            return 1;
        x = x / 10;
    }

    return 0;
}

int main()
{

    int n;
    cin >> n;

    if (verif(n / 1000))
        cout << "DA";
    else
        cout << "NU";

    return 0;
}