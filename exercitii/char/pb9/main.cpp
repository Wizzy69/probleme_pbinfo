#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    char aux[100];
    for(int i=strlen(s); i>=0;i--)
        if(strchr("aeiou ", s[i]) == 0)
        {
            strcpy(aux,s+i+1);
            strcpy(s+i, aux);
            cout << s;
            return 0;
        }

    cout << s;
    return 0;
}
