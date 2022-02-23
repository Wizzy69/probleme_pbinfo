#include <iostream>
#include <cstring>
using namespace std;
/**
    text cu 50 chr
    -sort cresc dupa nr de voc, ac nr de voc -> prima litera
    numa cuv cu nr par de consoane
*/

int nrConsoane(char *p)
{
    int n=strlen(p), nr=0;
    for(int i=0; i<n; i++)
        if(strchr("aeiou", p[i])==0)
            nr++;
    return nr;
}

int main()
{
    char a[51][51],s[51];
    cin.getline(s,51);
    char x[] = " .,?!";
    int n=0;
    for(char *p=strtok(s,x); p; p=strtok(NULL, x))
        if(nrConsoane(p)%2==0)
            strcpy(a[n++],p);

    for(int i=0; i<n-1; i++)
    {
        int nrvi = strlen(a[i])-nrConsoane(a[i]);
        for(int j=i+1; j<n; j++)
        {
            int nrvj = strlen(a[j])-nrConsoane(a[j]);
            if(nrvi>nrvj || (nrvi == nrvj && a[i][0]>a[j][0]))
            {
                char t[51];
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }

    for(int i=0; i<n; i++)

        cout << a[i] << "\n";

    return 0;
}
