#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    cin.getline(s,256);
    s[0] = toupper(s[0]);
    for(int i=1; s[i]; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z' && (s[i-1] == ' ' || s[i+1] == ' ' || s[i+1] == 0))
            s[i] = s[i]-32;

    }
    cout << s;
    return 0;
}
