#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.in");
    int fr[1001] = {0};
    int x, r = -1;
    while (fin >> x)
        fr[x]++;
    int i, y = -1;
    x = -1;
    for (i = 0; i < 1001; i++)
        if (x == -1 && fr[i] > 0)
            x = i;
        else if (x != -1 && y == -1 && fr[i] > 0)
        {
            y = i;
            break;
        }
    if (y == -1 || x == -1)
    {
        cout << "NU";
        return 0;
    }
    r = y - x;
    i++;

    for (; i < 1001; i++)
        if (fr[i] > 0 && y + r == i)
            y = i;
        else if (fr[i] > 0 && i != y + r)
        {
            r = -1;
            cout << "NU";
            break;
        }
    if (r != -1)
        cout << r;

    return 0;
}