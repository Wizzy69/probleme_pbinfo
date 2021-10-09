#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char *n = new char[9];
    cin >> n;

    int len = strlen(n);
    for (int i = 0; i < len; i += 2)
    {
        char aux = n[i];
        n[i] = n[i + 1];
        n[i + 1] = aux;
    }

    cout << n;
}