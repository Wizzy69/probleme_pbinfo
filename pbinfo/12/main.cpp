#include <iostream>
#include <cstring>
using namespace std;
char s[256];
void formare()
{
    int l = strlen(s);
    s[0] -= 32;
    s[l - 1] -= 32;
    for (int i = 1; i < l - 1; i++)
    {
        if (s[i] != ' ' && (s[i - 1] == ' ' || s[i + 1] == ' '))
            s[i] -= 32;
    }
}
int main()
{
    cin.getline(s, 256);
    formare();
    cout << s;
    return 0;
}