#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    ifstream fin("text.in");

    char *s = new char[256];
    fin.getline(s, 256);
    
    char a[256][256];
    int n = 0;
    
    for (char *p = strtok(s, " "); p; p = strtok(NULL, " "))
        strtok(a[n++], p);

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (strlen(a[i]) > strlen(a[j]))
            {
                char *aux = new char[256];
                strcpy(aux, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], aux);
            }

    for (int i = 0; i < n; i++)
        cout << a[i] << "\n";

    return 0;
}
