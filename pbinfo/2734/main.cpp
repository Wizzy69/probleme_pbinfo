#include <iostream>
using namespace std;

bool exista(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    int a[1000];
    int b[1000];
    int k = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (exista(b, k, a[i]))
            i--, n--;
        else
            b[k++] = a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}