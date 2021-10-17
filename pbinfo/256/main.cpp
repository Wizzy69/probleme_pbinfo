#include <iostream>
using namespace std;

bool verifFibo(int x)
{
    int f1, f2, f3;
    f1 = f2 = 1;
    while (f1 < x)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f1 == x;
}

int main()
{
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (verifFibo(x))
            cout << "DA\n";
        else
            cout << "NU\n";
    }
}