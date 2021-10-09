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
    int A, B;
    int n;
    int a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
        {
            int c = cmmdc(a[i], a[j]);
            int x = a[i] / c;
            int y = a[j] / c;
        }
}
