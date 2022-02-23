#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1000],cuv[11];
    cin.getline(s,41);
    cin.getline(a,11);
    char c[1000];
    int n=strlen(s),k=0,l=strlen(cuv);
    for(int i=0; i<n; i++)
        if(s[i]!=' ')
            c[k++] = s[i];
        else
        {
            c[k]=0;
            if(k==3)
            {
                char aux[1000];
                strcpy(aux, s+i-k);
                strcpy(s+i-k,cuv);
                strcpy(s+i-k+l," ");
                strcpy(s+i-k+l+1, aux);
                i+=l+1;
                n+=l+1;
            }
            k=0;
        }
    if(k==3)
    {
        char aux[1000];
        strcpy(aux, s+i-k);
        strcpy(s+i-k,cuv);
        strcpy(s+i-k+l," ");
        strcpy(s+i-k+l+1, aux);
        n+=l+1;
    }
    s[n]=0;
    return 0;
}
