#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, a[21][21];
    int m;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int v[21] = {0};
    for (int i = 0; i < n && a[i][0] == a[0][0]; i++)
    {
        for (int j = 1; j < n && a[i][j] == a[i][0]; j++)
            v[i]++;
        if (i == 0)
            m = 1;
        else if (v[i] >= v[i - 1])
            m++;
        else
            break;
    }
    cout << m;
    return 0;
}