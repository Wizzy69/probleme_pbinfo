#include <iostream>
#include <fstream>
using namespace std;
ifstream f1("NR1.TXT");
ifstream f2("NR2.TXT");

int main()
{
    bool ok1, ok2;
    ok1 = ok2 = false;
    int a, b, ultimul = -1;
    f1 >> a;
    f2 >> b;
    while (!ok1 && !ok2)
        if (a < b)
        {
            if (a % 5 == 0 && a > ultimul)
            {
                cout << a << " ";
                ultimul = a;
            }
            if (!(f1 >> a))
                ok1 = 1;
        }
        else if (a > b)
        {
            if (b % 5 == 0 && b > ultimul)
            {
                ultimul = b;
                cout << b << " ";
            }
            if (!(f2 >> b))
                ok2 = 1;
        }
        else
        {
            if (!(f1 >> a))
                ok1 = 1;
            if (!(f2 >> b))
                ok2 = 1;
        }
    while (!ok1)
    {
        if (a % 5 == 0 && a > ultimul)
        {
            cout << a << " ";
            ultimul = a;
        }
        if (!(f1 >> a))
            ok1 = 1;
    }
    while (!ok2)
    {
        if (b % 5 == 0 && b > ultimul)
        {
            ultimul = b;
            cout << b << " ";
        }
        if (!(f2 >> b))
            ok2 = 1;
    }
    return 0;
}