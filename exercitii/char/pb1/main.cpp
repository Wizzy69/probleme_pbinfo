#include <iostream>

using namespace std;

int main()
{
    char s[256];
    cin.getline(s,41);
    int n=strlen(s);
    for(int i=0; i<n; i++)
        if(s[i]>='A'&&s[i]<='Z')
        {
            char aux[256];
            strcpy(aux,s+i+1);
            strcpy(s+i+1,"***");
            strcpy(s+i+4,aux);
            i+=3;
            n+=3
        }
        else
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                char aux[161];
                strcpy(aux,s+i+1);
                strcpy(s+i+1,"##");
                strcpy(s+i+3,aux);
                i+=2;
                n+=2;
            }
        }
    s[n]=0;
    cout<<s;
    return 0;
}
