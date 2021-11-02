#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n / 2; ++i)
        cout << a[i] << " " << a[n - i - 1] << " ";
    if(n%2==1)
        cout << a[n / 2];
    return 0;
}