#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[17][17] = {0};
    //Nord
    for (int i = 0; i < (n - 1) / 2; i++)
        for (int j = i + 1; j < n -i-1; j++)
            a[i][j] = 1;

    //Sud
    for (int i = n / 2 + 1; i < n; i++)
        for (int j = i - 1; j > n - i - 1; j--)
            a[i][j] = 2;

    //Est
    for (int j = n / 2 + 1; j < n; j++)
        for (int i = n - j; i < j; i++)
            a[i][j] = 3;

    //Vest
    for (int j = 0; j < (n - 1) / 2; j++)
        for (int i = j + 1; i < n - j - 1; i++)
            a[i][j] = 3;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}