/**
Subiectul 2:
1. a
2. b
3. (1,4,3)
    [14], [43]
4. n=0;
for(i=1;i<=11;i++)
{ cin>>s; | scanf(“%s”,s);
    if(strcmp("are", s+strlen(s)-3) == 0)
        n++;
}

5.
*/

#include <iostream>

using namespace std;

double media(int a[51][50], int n, int col)
{
    double s = 0.0;
    int nr = 0;
    for(int i=0;i<n;i++)
        s+=a[i][col], nr++;

    return s/nr;

}

void deplasare(int a[51][50], int &n)
{
    n++;
    int mij = n/2;

    for(int i=n-1;i>mij;i--)
        for(int j=0;j<n-1;j++)
            a[i][j] = a[i-1][j];
    for(int j=0;j<n-1;j++)
        a[mij][j] = media(a,n-1,j);
}

int main()
{
    double a[51][50];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];

    deplasare();
    return 0;
}
