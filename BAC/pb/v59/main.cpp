#include <iostream>
using namespace std;

void divizor(int a, int &d)
{

    for (d = 2; d * d < a; d++)
        if (a % d == 0)
            return;
    d = a;
}

int main()
{

    int x, d;
    cin >> x;

    divizor(x, d);
    if (d == x)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}