#include <iostream>
using namespace std;

int main()
{
    int n, a[30][30];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i][0] = i+1;
        for (int j = 1; j < n; j++)
            a[i][j] = a[i][j - 1] + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}