#include <iostream>
using namespace std;

bool prim(int n)
{
    if (n < 2 || n > 2 && n % 2 == 0)
        return false;
    for (int d = 3; d * d <= n; d += 2)
        if (n % d == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;

    long long a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        if (prim(a[i]))
        {
            for (int j = i; j < n - 1; j++)
                a[j] = a[j + 1];
            n--;
        }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}