#include <iostream>
using namespace std;

int main()
{
    int n, x, p;
    cin >> n >> x >> p;

    int a[26];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n; i >= p-1; i--)
        a[i] = a[i - 1];

    a[p-1] = x;

    for (int i = 0; i <= n;i++)
        cout << a[i] << " ";
}