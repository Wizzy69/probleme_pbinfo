#include <iostream>
#include <cstring>

using namespace std;
/**
Text cu max 100 char
Sa se afiseze in ord desc a lungimilor cuv din text
care contin cel putin unul dintre cuvintele:
do re mi fa sol la si

*/
int main()
{
    char s[101];
    cin.getline(s,101);

    char m[101][101];
    int k=0;
    for(char *p = strtok(s, " ");p;p=strtok(0, " "))
    {
        if(strstr(p, "do") || strstr(p, "re") || strstr(p, "mi") ||
           strstr(p, "fa") || strstr(p, "sol")|| strstr(p, "la") || strstr(p, "si"))
                strcpy(m[k++], p);
    }

    for(int i=0;i<k-1;++i)
    {
        for(int j=i+1;j<k;++j)
            if(strlen(m[i]) < strlen(m[j]))
        {
            char aux[101];
            strcpy(aux, m[i]);
            strcpy(m[i], m[j]);
            strcpy(m[j], aux);
        }
    }

    for(int i=0;i<k;++i)
        cout << m[i] << '\n';

    return 0;
}
