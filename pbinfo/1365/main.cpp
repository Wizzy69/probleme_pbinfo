#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[200];
    cin >> a[0];

    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == a[i - 1] % 2)
        {
            a[i] = (x + a[i - 1]) / 2;
            a[i + 1] = x;
            i++, n++;
        }
        else
            a[i] = x;
    }

    for (int i = 0; i < n;i++)
        cout << a[i] << " ";
}