#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[101];
    int n;
    cin.getline(c, 101);
    cin >> n;
    int ok = 0;
    for (char *t = strtok(c, " "); t; t = strtok(NULL, " "))
        if (strlen(t) == n)
        {
            ok = 1;
            cout << t << '\n';
        }
    if (ok == 0)
        cout << "nu exista";
    return 0;
}
