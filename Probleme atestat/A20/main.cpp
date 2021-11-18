#include <iostream>
#include <fstream>
using namespace std;
int nrcif(int x)
{
    if (x < 10)
        return 1;
    return 1 + nrcif(x / 10);
}
int main()
{
    ifstream fin("mat.in");
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }
    int nrc = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (nrcif(a[i][j]) % 2 == 0)
                nrc++;
    
    cout << nrc;
    return 0;
}
