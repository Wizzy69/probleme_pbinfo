#include <iostream>
using namespace std;
int main()
{
    int p, k;
    cin >> p >> k;
    if (k % 2 == 0)
        cout << k / 2 + k - 2 << p;
    else
        cout << k / 2 + k - 1 << p;
}