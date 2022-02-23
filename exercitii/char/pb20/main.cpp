#include <iostream>
#include <cstring>

using namespace std;

bool doarvoc(char *c)
{
    int n = strlen(c);
    for(int i=0; i<n; i++)
        if(strchr("aeiou", c[i]) == 0)
            return false;
    return true;
}

int main()
{
    char s[256];
    char sep[] = " .,?!;:";
    cin.getline(s, 256);
    int n = 0;
    char a[20][11];

    for(char *p = strtok(s, sep); p; p = strtok(0, sep))
        if(doarvoc(p))
            strcpy(a[n++], p);

    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(strcmp(a[i],a[j]) > 0)
            {
                char aux[11];
                strcpy(aux, a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j], aux);
            }

    for(int i=0;i<n;i++)
        cout << a[i] << "\n";

    return 0;
}

