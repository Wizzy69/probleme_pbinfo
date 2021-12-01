#include <iostream>
#include <fstream>
using namespace std;

bool verif(int a, int b)
{
    int f1 = 0;
    int f2 = 1;
    int f3;
    do
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        if (a == f2 && b == f3)
            return true;
    } while (f3 <= b);
    return false;
}

void swp(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

int main()
{
    ifstream fin("numere.in");
    int a, b;
    fin >> a >> b;
    swp(a, b);
    if (verif(a, b))
        cout << "DA";
    else
        cout << "NU";
    return 0;
}