#include <iostream>
#include <fstream>
using namespace std;

int scif(int x)
{
    if (x < 10)
        return x;
    return x % 10 + scif(x / 10);
}

int main()
{
    ifstream fin("sir.in");
    int n, a[51];
    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> a[i];
    for (int i = 0; i < n / 2; ++i)
        if (scif(a[i]) == scif(a[n - i - 1]))
            cout << a[i] << " " << a[n - i - 1] << '\n';
    return 0;
}