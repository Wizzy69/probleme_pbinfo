#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("Pascal.out");
    int n;
    cin >> n;
    n++;
    int **a = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        a[i] = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        a[i][i] = 1;

    for (int i = 2; i < n; i++)
        for (int j = 1; j < i; j++)
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }
    return 0;
}