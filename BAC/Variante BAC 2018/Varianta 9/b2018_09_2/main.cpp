/*
Subiectul 2:
    1. d
    2. c

    3.
    if(d.nr == d.nr) cout << "prim";
    else if(d.nr == d.mic*d.mic && (d.mic == 2 || d.mic == 3 || d.mic == 5 || d.mic == 7)) cout << "patrat";
    else cout << d.mic << " " << d.nr/d.mic;

    4.
    for(i=1;i<=9;i++)
        for(j=1;j<=9;j++)
            a[i][j] = a[j][i] = j;

    5.

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    char numar[101] = "";
    int c = -1;
    cin.getline(s, 101);
    for (char *p = strtok(s, " "); p; p = strtok(0, " "))
    {
        if (p[0] >= '0' && p[0] <= '9')
            if (c < (p[0] - '0'))
            {
                c = p[0] - '0';
                strcpy(numar, p);
            }
    }

    if (c == -1)
        cout << "nu exista";
    else
        cout << numar;

    return 0;
}