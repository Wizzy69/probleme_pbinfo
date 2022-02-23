#include <iostream>
#include <cstring>

int main()
{

    char s[256];
    cin.getline(s,256);
    int len = strlen(s);
    for(int i=0; i<len; i++)
        if(strchr("aeiou", s[i]))
            cout << s[i] << " ";
    return 0;
}
