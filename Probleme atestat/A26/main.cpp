#include <iostream>
#include <fstream>
using namespace std;
int n, m, a[100][100];
void citire()
{
    ifstream f("mat.in");
    f>>n>>m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            f>>a[i][j];
}
int nrdiv(int x)
{
    int nr=0;
    for(int d=1; d*d<=x; d++)
        if(x%d==0)
            nr++;
    return nr;
}

int main()
{
    ofstream g("mat.out");
    int maxi=0;
    citire();
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(maxi<nrdiv(a[i][j]))
                maxi=nrdiv(a[i][j]);
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(nrdiv(a[i][j])==maxi)
                g<<a[i][j]<<"\n";
            return 0;
}