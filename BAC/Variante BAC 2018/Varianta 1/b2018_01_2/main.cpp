/*
Subiectul 2:
    1. a
    2. c
    3.

    if(x == 0) cout << "impartiere nepermisa";
    else{
        rezultat.cat = 2018/x;
        rezultat.rest = 2018%x;
    }

    4. 4, 3, 8
    5.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, v[100], a[100][100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int j = 0; j < n; j++)
        if (j % 2 == 0)
            for (int i = n - 1; i >= 0; i--)
                a[i][j] = v[n - i - 1];
        else
            for (int i = 0; i < n; i++)
                a[i][j] = v[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}