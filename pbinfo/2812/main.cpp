#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("progresie3.in");
ofstream fout("progresie3.out");

int main()
{

    int fr[1001] = {0}, i = 0, x, y;

    while (fin >> x)
        fr[x] = 1;

    for (int i = 0; i <= 1000; i++)
        if (fr[i] == 1)
        {
            x = i;
            break;
        }

    for (int i = x + 1; i <= 1000; i++)
        if (fr[i] == 1)
        {
            y = i;
            break;
        }

    int r = y - x;
    x = y;

    for (int i = x + 1; i <= 1000; i++)
        if (fr[i] == 1)
            if (i - x != r)
            {
                fout << "NU";
                return 0;
            }
            else
                x = i;
 
    fout << r;
    return 0;
}