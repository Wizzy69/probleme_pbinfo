#include <iostream>
#include <cstring>
using namespace std;

int nrvoc(char s[])
{
    int nr = 0;
    int n = strlen(s);
    for (int i = 0; i < n; ++i)
        if (strchr("aeiouAEIOU", s[i]))
            nr++;
    return nr;
}

int main()
{
    int n = 0;
    char s[256];
    cin.getline(s, 256);
    char a[256][256];
    for (char *p = strtok(s, " "); p; p = strtok(NULL, " "))
        strcpy(a[n++], p);

    for (int i = 0; i < n - 1; i++)
    { // ana are
        for (int j = i + 1; j < n; j++)
        {
            int x = nrvoc(a[i]);
            int y = nrvoc(a[j]);

            if (x > y)
            {
                char aux[256];
                strcpy(aux, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], aux);
            }
            else if (x == y)
            {
                int s1 = strlen(a[i]);
                int s2 = strlen(a[j]);
                if (s1 < s2)
                {
                    char aux[256];
                    strcpy(aux, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], aux);
                }
                else if (s1 == s2)
                {
                    if (strcmp(a[i], a[j]) > 0)
                    {
                        char aux[256];
                        strcpy(aux, a[i]);
                        strcpy(a[i], a[j]);
                        strcpy(a[j], aux);
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << "\n";
    return 0;
}