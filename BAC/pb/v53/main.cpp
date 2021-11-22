#include <iostream>
#include <fstream>
using namespace std;

int cmmdc(int a, int b)
{
    while (b)
    {
        int r = a % b;
        b = a;
        a = r;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (cmmdc(i, j) == 1)
                c++;
    cout << c;
}