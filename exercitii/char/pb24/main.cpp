#include <iostream>
#include <cstring>

//pbinfo 2996
using namespace std;
bool pali(char *s)
{
    int n=strlen(s)/2;
    for(int i=0; i<n; i++)
        if(tolower(s[i]) != tolower(s[n-i-1]))
            return false;
    return true;
}
int main()
{
    char s[256];
    cin.getline(s,256);
    int lmax = 0;
    char cuv[256]="";
    for(char *p = strtok(s, " :;.,"); p; p=strtok(0, " :;.,"))
    {
        if(pali(p))
        {
            int k=strlen(p);
            if(k>lmax)
            {
                lmax=k;
                strcpy(cuv, p);
            }
        }
    }

    cout << cuv;
    return 0;
}
