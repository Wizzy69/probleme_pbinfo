#include <iostream>
using namespace std;
int nrdiv(int x); // numarul de divizori
int produs(int **a, int n)
{
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        if (nrdiv(a[i][i]) % 2 == 0)
            p = p * a[i][i];
        if (nrdiv(a[i][n - i - 1]) % 2 == 0)
            p *= a[i][n - i - 1];
    }
    return p;
}

int main()
{
    int a[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}