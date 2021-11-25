#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

bool pali(char *c)
{
    int l = strlen(c);

    for (int i = 0; i < l / 2; i++)
        if (c[i] != c[l - i - 1])
            return false;

    return true;
}

int main()
{
    ifstream fin("palindrom.in");
    ofstream fout("palindrom.out");

    int n;
    char c[21];
    fin >> n;
    fin.get();
    for (int i = 0; i < n; i++)
    {
        fin.getline(c, 21);
        fout << pali(c) << "\n";
    }

    return 0;
}