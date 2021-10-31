#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char s[256];
    cin.getline(s, 256);
    n = strlen(s);
    s[0] = s[0] - 32;
    for (int i = 1; i < n; i++)
        if (s[i - 1] == ' ' && s[i] != ' ')
            s[i] = s[i] - 32;
    cout << s;
    return 0;
}