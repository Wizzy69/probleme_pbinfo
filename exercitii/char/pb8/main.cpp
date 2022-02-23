#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    int n=strlen(s);
    s[0] = toupper(s[0]);
    for(int i=1;i<n;i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z' && s[i-1] == ' ')
            s[i] =

    }

    cout << s;
    return 0;
}
