/*
Subiectul 2:
1. b
2. b
3.
struct poligon
{
    int numar;
    struct vf{
        float x,y;
    }varf[100];
} p;

4.
for(i=0;i<9;i++)
    for(j=0;j<9;j++)
        if(i < j && i+j < n-1)
            a[i][j] = 'a';
        else a[i][j] = 'b';

*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    int ok = 0;

    for (char *p = strtok(s, " "); p; p = strtok(0, " "))
        if (strstr(p, "DO") || strstr(p, "RE") ||
            strstr(p, "MI") || strstr(p, "FA") ||
            strstr(p, "SOL") || strstr(p, "LA") ||
            strstr(p, "SI"))
        {
            cout << p << '\n';
            ok = 1;
        }
    if (ok == 0)
        cout << "nu exista";
    return 0;
}