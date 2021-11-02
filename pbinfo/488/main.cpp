#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[1001];
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 2; i <= n; i += 2)
        cout << a[i] << " ";
    cout << '\n';

    if (n % 2 == 0)
        n--;

    for (int i = n; i >= 1; i -= 2)
        cout << a[i] << " ";

    return 0;
}