#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[256],c1,c2;
    cin>>c1>>c2;
    cin.get();
    cin.getline(a,256);
    cout << a << '\n';
    int n=strlen(a);
    for(int i=0;i<n;i++)
        if(a[i]==c1)
            a[i] = c2;
        else if(a[i] == c2)
            a[i]=c1;
    cout << a;
    return 0;
}
