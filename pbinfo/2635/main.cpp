#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("capslock.in");
    ofstream fout("capslock.out");

    char *c = new char[256];
    fin.getline(c, 256);

    bool _caps = false;
    int len = strlen(c);
    for (int i = 0; i < len; ++i)
    {
        if (c[i] == '#')
        {
            _caps = !_caps;
            continue;
        }
        else
            c[i] = _caps ? toupper(c[i]) : tolower(c[i]);
        fout << c[i];
    }
}