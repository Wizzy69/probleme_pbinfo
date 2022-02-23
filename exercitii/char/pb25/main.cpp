#include <iostream>
#include <cstring>



using namespace std;

int nrvoc(char *p)
{
    int nr = 0;
    int n=strlen(p);
    for(int i=0; i<n; i++)
        if(strchr("aeiou", p[i]))
            nr++;
    return nr;
}

int main()
{
    char s[256], a[256][256];
    cin.getline(s,256);
    int n=0;
    for(char *p = strtok(s, " "); p; p=strtok(0, " "))
        strcpy(a[n++], p);

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
            if(nrvoc(a[i]) < nrvoc(a[j]))
            {
                char aux[256];
                strcpy(aux,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],aux);
            }
            else if(nrvoc(a[i]) == nrvoc(a[j]))
            {
                if(strlen(a[i]) == strlen(a[j]))
                {
                    if(strcmp(a[i],a[j]) > 0)
                    {
                        char aux[256];
                        strcpy(aux,a[i]);
                        strcpy(a[i],a[j]);
                        strcpy(a[j],aux);
                    }
                }
                else
                {
                    if(strlen(a[i]) < strlen(a[j]))
                    {

                        char aux[256];
                        strcpy(aux,a[i]);
                        strcpy(a[i],a[j]);
                        strcpy(a[j],aux);
                    }
                }
            }
    }

    for(int i=0; i<n; i++) cout << a[i] << '\n';
    return 0;
}
