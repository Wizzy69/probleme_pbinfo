#include <iostream>

using namespace std;
int n,m,a[50][50];
bool prim(int x){if(x<2||x>2&&x%2==0) return false;for(int d=3;d*d<=x;d+=2)if(x%d==0)return false;return true;}
void citire(){cin>>n>>m; for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j];}
void afisare(){for(int i=0;i<n;i++) {for(int j=0;j<m;j++) cout<<a[i][j] << " "; cout << endl;} }
int maxprim(){int m =-1; for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(prim(a[i][j])&&m<a[i][j])m=a[i][j];return a[i][j];}
void elim(){for(int i=0;i<n;i++)for(int j=0;j<m;j++)a[i][j-1]=a[i][j];n--;for(int i=0;i<n;i++)for(int j=0;j<m;j++)a[i][j-1] = a[i][j]; m--}
int main()
{
    return 0;
}
