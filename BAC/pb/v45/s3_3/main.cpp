#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double *a = new double[n];

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
    {
        int ok = 1;
        for (int j = 0; j < n; ++j)
            if (a[i] == a[j])
            {
                ok = 0;
                break;
            }
        if (ok == 1)
            cout << a[i] << " ";
    }
    return 0;
}