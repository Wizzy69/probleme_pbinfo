#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

bool verif(char *a, char *b)
{
    int na = strlen(a);
    int nb = strlen(b);

    return (a[na - 1] == b[nb - 1] && a[na - 2] == b[nb - 2]);
}

int main()
{
    ifstream fin("text.in");
    ofstream fout("rime.out");
    char s[256], *p, a[256][256];
    fin.getline(s, 256);
    p = strtok(s, " ");
    int n = 0;
    while (p)
    {
        strcpy(a[n++], p);
        p = strtok(NULL, " ");
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (verif(a[i], a[j]))
                fout << a[i] << " " << a[j] << "\n";
    return 0;
}