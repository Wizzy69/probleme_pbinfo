#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("text.in");
    char *s = new char[256];
    fin.getline(s, 256);
    int n = strlen(s);
    int lc = 0, lmax = 0, imax, ic = 0;
    for (int i = 0; i < n; i++)
        if (s[i] >= '0' && s[i] <= '9')
            lc++;
        else
        {
            if (lc > lmax)
                lmax = lc, imax = ic;
            lc = 0;
            ic = i + 1;
        }
    if (lc > lmax)
        lmax = lc, imax = ic;
    for (int i = imax; i < imax + lmax; i++)
        cout << s[i];

    return 0;
}