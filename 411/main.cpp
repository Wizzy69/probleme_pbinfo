#include <iostream>

using namespace std;

int cmmdc(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = i; j <= n; ++j)
            if (cmmdc(i, j) == 1)
                k++;
    cout << k;
}
