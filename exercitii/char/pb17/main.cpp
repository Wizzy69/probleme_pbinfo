#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[101];
    cin.getline(a,101);
    int n=strlen(a);
    for(int i=0;i<n;i++)
    {
        if(strchr("aeiou",a[i]))
            a[i]++;
    }
    cout << a;
    return 0;
}
