#include <iostream>
#include <fstream>
using namespace std;

bool fibo(int x)
{
    int f1 = 1;
    int f2 = 0;
    int f3;
    do
    {
        f3 = f1 + f2;
        if (f3 == x)
            return true;
        f1 = f2;
        f2 = f3;
    } while (f3 <= x);
    return false;
}

int main()
{
    int nr = 0;
    int n, x;
    ifstream fin("sir.in");
    fin >> n;
    for (int i = 0; i < n;i++)
    {
        fin >> x;
        if(fibo(x))
            nr++;
    }

    cout << nr;
    return 0;
}