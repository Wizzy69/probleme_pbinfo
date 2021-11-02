#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    int a[1501];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = p; i < n; i++)
        a[i] = a[i + 1];
    n--;
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}