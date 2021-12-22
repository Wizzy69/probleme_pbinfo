#include <iostream>
#include <fstream>
using namespace std;
ifstream f1("nr1.txt");
ifstream f2("nr2.txt");

int main()
{
    int n, m, i = 0, j = 0, a, b;
    f1 >> n >> a;
    f2 >> m >> b;
    while (i < n && j < m)
        if (a < b)
        {
            cout << a << " ";
            f1 >> a;
            i++;
        }
        else if (a > b)
        {
            j++;
            cout << b << " ";
            f2 >> b;
        }
        else
        {
            cout << a << " ";
            j++, i++;
            f1 >> a;
            f2 >> b;
        }
    while (i < n)
    {
        i++;
        cout << a << " ";
        f1 >> a;
    }
    while (j < m)
    {
        j++;
        cout << b << " ";
        f2 >> b;
    }
    return 0;
}
