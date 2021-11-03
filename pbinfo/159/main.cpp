#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[50];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            a[i + 1] = 2 * a[i];
            i++;
            n++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}