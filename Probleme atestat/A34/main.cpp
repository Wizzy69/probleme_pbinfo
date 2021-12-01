#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

bool pali(char *c)
{
    int n = strlen(c);
    for (int i = 0; i < n / 2; i++)
        if (c[i] != c[n - i - 1])
            return false;
    return true;
}

int pali2(char *c)
{
    int n = strlen(c), i, j;
    for (i = 0, j = n - 1; i < j && c[i] == c[j]; i++, j--)
        ;
    return i == j;
}

int pali3(char *s)
{
    int n = strlen(s), i, j;
    while (i < j)
    {
        if (s[i] != s[j])
            return 0;

        i++;
        j--;
    }
    return 1;
}

int main()
{
    char s[256];
    ifstream fin("text.in");
    fin.getline(s, 256);
    bool ok = false;
    for (char *p = strtok(s, " "); p; p = strtok(NULL, " "))
        if (pali(p))
        {
            cout << p << '\n';
            ok = true;
        }
    if (!ok)
        cout << "NU EXISTA";
    return 0;
}