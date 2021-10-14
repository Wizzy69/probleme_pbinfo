#include <fstream>
#include <iostream>
using namespace std;

bool prim(int n)
{
    if (n < 2 || n > 2 && n % 2 == 0)
        return false;
    for (int d = 3; d * d <= n; d += 2)
        if (n % d == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    ofstream fout("prietene.out");
    if (n > 3)
    {
        fout << "(2,3)";
    }

    for (int i = 5; i <= n; i += 2)
    {
        if (prim(i) && prim(i + 2))
            fout << ",(" << i << " " << i + 2 << ")";
    }
}