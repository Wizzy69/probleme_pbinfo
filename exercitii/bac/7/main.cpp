#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    char s[256];
    cin.getline(s, 256);
    n = strlen(s);
    for (int i = n - 1; i >= 0; i--)
        if (strchr("aeiou", s[i]) == 0)
        {
            strcpy(s + i, s + i + 1);
            n--;
            break;
        }
    s[n] = '\0';
    cout << s;
    return 0;
}