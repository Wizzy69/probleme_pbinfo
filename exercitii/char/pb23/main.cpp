#include <iostream>
#include <cstring>

using namespace std;

void Prescurtat(char s[])
{
    char rez[101]="";
    for(char *p = strtok(s, " "); p; p = strtok(0, " "))
    {
        if(p[strlen(p)-1] == '.')
            if(p[0] == 'C')       strcat(rez, "COLEGIUL");
            else if (p[0] == 'L') strcat(rez, "LICEUL");
            else if(p[0] == 'N')  strcat(rez, "NATIONAL");
            else                  strcat(rez, "TEORETIC");
        else strcat(rez, p);
        strcat (rez, " ");
    }

    strcpy(s, rez);
    s[strlen(s)] = 0;3
}
