#include <iostream>

using namespace std;

void cmmdc(int a, int b)
{
    for (int d = 1; d < a; d++)
        if (a % d == 0 && b % d == 0)
            cout << d << " ";
}

int main()
{
    int a, b;

    cin >> a >> b;
    cmmdc(a, b);
}
