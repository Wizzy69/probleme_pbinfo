#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[256];
    cin.getline(a,256);
    char b[256];
    int n=strlen(a), l=0;
    for(int i=1;i<n;i+=2)
    {
        int k = a[i]-'0';
        for(int j=0;j<k;j++)
            b[l++] = a[i-1];
    }
    b[l] = 0;
    cout << b;


    return 0;
}

