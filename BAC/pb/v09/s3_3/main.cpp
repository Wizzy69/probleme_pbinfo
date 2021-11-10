#include <iostream>
using namespace std;
void sub(int n, int k)
{
    int p = n * k;
    for (int i = 0; i < n; i++)
    {
        cout << p << " ";
        p = p - k;
    }
}
