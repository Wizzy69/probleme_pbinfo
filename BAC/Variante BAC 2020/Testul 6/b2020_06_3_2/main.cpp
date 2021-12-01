#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    char c[101];
    cin.getline(c, 101);

    for (char *p = strtok(c, " "); p; p = strtok(NULL, " "))
    {
        if (strlen(p) < 3)
        {
            cout << p << " ";
            continue; // folosesc continue pentru a forta for-ul sa treaca la urmatorul pas
                      // fara sa mai execute instructiuniile ce urmeaza.
        }
        char aux[101];
        strcpy(aux, p + 1);
        strncat(aux, p, 1);
        cout << aux << " ";
    }
}