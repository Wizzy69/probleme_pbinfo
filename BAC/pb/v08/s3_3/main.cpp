#include <iostream>
using namespace std;

int sub(int n, int m, int a[100], int b[100])
{
    int i, j, ok;
    i = j = 0;
    if (a[i] < b[j])
        cout << a[i] << " ",
            ok = 0, i++;
    else
        cout << b[j] << " ",
            j++, ok = 1;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (ok == 1)
                cout << a[i] << " ",
                    ok = 0;
            i++;
        }
        else if (ok == 0)
        {
            cout << b[j] << " ", ok = 1;
            j++;
        }
    }

    if (ok == 0 && j < m)
        cout << b[j];

    if (ok == 1 && i < n)
        cout << a[i];
}

int main()
{
}