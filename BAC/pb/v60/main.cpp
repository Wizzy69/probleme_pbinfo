#include <iostream>
using namespace std;

void radical(int a, int &x)
{
    x = a / 2;
    while (x * x > a)
        x--;
}

int main()
{

    int n, rad;
    cin >> n;
    radical(n, rad);
    if (rad * rad == n)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}