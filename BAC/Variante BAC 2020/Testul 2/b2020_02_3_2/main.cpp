#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[101];
    cin.getline(c, 101);
    for (char *p = strtok(c, " "); p; p = strtok(NULL, " "))
    {
        if (p[0] == '<')
        {
            int i = 1;
            while (p[i] != '>')
            {
                p[i] = toupper(p[i]);
                i++;
            }
        }
        cout << p << " ";
    }

    return 0;
}