#include <iostream>
using namespace std;
int FS(int S, int n, int P)
{
    if (n == 1)
        return S;
    if (n == 2)
        return S * S - 2 * P;
    return S * FS(S, n - 1, P) - P * FS(S, n - 2, P);
}

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int S = -b / a;
    int P = c / a;

    cout << FS(S, n, P);
}