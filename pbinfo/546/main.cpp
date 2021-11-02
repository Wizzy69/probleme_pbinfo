#include <iostream>
using namespace std;

void main()
{
    int n;
    cin >> n;
    int v[1000];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] % v[n - 1] == 0)
            cout << v[i] << " ";
    }
    cout << v[n - 1];
}