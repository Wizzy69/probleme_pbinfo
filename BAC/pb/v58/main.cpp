#include <iostream>
using namespace std;

void divizor(int a, int &d)
{
    for (d = a / 2; d >= 1; d--)
        if (a % d == 0)
            return;
}

int main()
{
    int x, d;
    cin >> x;

    divizor(x, d);
    if (d == 1)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}