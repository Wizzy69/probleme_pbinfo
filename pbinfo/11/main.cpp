#include <iostream>
#include <cstring>
using namespace std;
char s[21];
void formare()
{
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (strchr("aeiou", s[i]))
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
    }
}
int main()
{
    cin.getline(s, 21);
    formare();
    cout << s;
    return 0;
}