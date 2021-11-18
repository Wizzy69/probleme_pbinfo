#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int fr[25];
ifstream fin("text.in");
ofstream fout("text.out");

int main()
{
    char c;
    while (fin >> c)
    {
        if (isalpha(c))
        {
            if (c >= 'a' && c <= 'z')
                c = c - 32;
            int p = c - 'A';
            fr[p]++;
        }
    }
    for (int i = 0; i < 26; i++)
        if (fr[i] > 0)
            fout << (char)('A' + i)
                 << " - " << fr[i] << '\n';
     return 0;
}
