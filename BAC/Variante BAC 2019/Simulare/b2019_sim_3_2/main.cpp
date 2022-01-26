#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[51], a[100], v[][10] = {"COLEGIUL", "NATIONAL", "LICEUL", "TEORETIC"};
    cin.getline(s, 51);
    for (char *p = strtok(s, " "); p; p = strtok(NULL, " "))
    {
        int n = strlen(p) - 1;
        if (p[n] == '.')
        {
            int i = 0;
            while (strncmp(v[i], p, n) != 0)
                i++;
            strcat(a, v[i]);
        }
        else
            strcat(a, p);
        strcat(a, " ");
    }
    cout << a;
}