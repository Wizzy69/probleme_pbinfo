#include <iostream>
#include <fstream>
#include <cstring>

std::ifstream fin("caesar.in");
std::ofstream fout("dbftbs.out");

char newChar(char c, int p, bool enc)
{
    if (enc)
    {
        if (c + p <= 'z')
            return c + p;
        else
            return ('a' - 1) + (p - ('z' - c));
    }
    else
    {
        if (c - p >= 'a')
            return c - p;
        else
            return 'z' - (p - (c - 'a' + 1));
    }
}

void EncryptDecrypt(char a[], int n, bool enc)
{
    int l = strlen(a);
    for (int i = 0; i < l; i++)
        if (isalpha(a[i]))
            if (a[i] == tolower(a[i]))
                a[i] = newChar(a[i], n, enc);
            else
                a[i] = toupper(newChar(tolower(a[i]), n, enc));
    fout << a;
}

int main()
{
    char a[257];
    int n;
    fin.getline(a, 257);
    fin >> n;
    n %= 26;
    fin.get();
    std::string c;
    fin >> c;
    EncryptDecrypt(a, n, c == "encrypt");
    return 0;
}