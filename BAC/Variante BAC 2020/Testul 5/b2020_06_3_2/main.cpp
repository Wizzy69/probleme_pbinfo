#include <iostream>
#include <cstring>
using namespace std;

void transformare(char c[])
{
    int len = strlen(c);
    if (len % 2 == 0)
        return;

    for (int i = 0; i < len / 2; i++)
    {
        char aux = c[i];
        c[i] = c[len - i - 1];
        c[len - i - 1] = aux;
    }
}

int main()
{
    char c[101];
    char c2[101];
    cin.getline(c, 101);
    strcpy(c2, c);
    char aux[101] = "";
    for (char *p = strtok(c, " "); p; p = strtok(NULL, " "))
    {
        transformare(p);
        strcat(aux, p);
        strcat(aux, " ");
    }
    strcpy(c, aux);

    if (strcmp(aux, c2) == 0)
        cout << "nu exista";
    else
        cout << c;

    return 0;
}