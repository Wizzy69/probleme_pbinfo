#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int lmax, l;
    int x, y;
    ifstream fin("bac.txt");
    fin >> x;
    l = 1;
    lmax = 0;
    while (fin >> y)
    {
        if (x == y)
        {
            if (l > lmax)
                lmax = l;
            l = 1;
        }
        else
            l++;
        x = y;
    }

    if (l > lmax)
        lmax = l;
    cout << lmax;
    return 0;
}