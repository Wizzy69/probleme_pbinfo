#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1000],d[1000],cuv[11];
    cin.getline(s,1000);
    cin.getline(cuv,11);
    for(char *p = strtok(s," "); p; p=strtok(NULL, " "))
    {
        if(strlen(p) == 3)
        {
            strcat(d, cuv);
            strcat(d," ");
        }
        strcat(d,p);
        strcat(d," ");
    }
    int n=strlen(d);
    d[n-1]=0;
    strcpy(s,d);
    cout << s;
    return 0;
}
