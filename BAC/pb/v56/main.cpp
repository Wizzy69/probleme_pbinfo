#include <iostream>
using namespace std;

bool prim(int x)
{
    int d;
    for (d = 2; d < x / 2; d++)
        if (x % d == 0)
            return false;
    return true;
}

void numar(int x, int &nrp)
{
    nrp = 1;
    for (int i = 3; i < x; i = i + 2)
    {
        if (prim(i))
            nrp++;
    }
}

int main()
{

    int a, b, nrpB, nrpA;
    cin >> a >> b;

    numar(b, nrpB);
    numar(a, nrpA);

    if (nrpB - nrpA >= 1 || prim(b))
        cout << "DA";
    else
        cout << "NU";

    return 0;
}