#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int *fr = (int *)calloc(26, sizeof(int));
    char *a = new char[21];
    char *b = new char[21];
    cin >> a;
    cin >> b;
    int na = strlen(a);
    int nb = strlen(b);

    if (na != nb)
    {
        cout << "NU";
        return 0;
    }

    for (int i = 0; i < na; ++i)
        fr[a[i] - 'a']++;

    for (int i = 0; i < nb; ++i)
        fr[b[i] - 'a']++;

    bool ok = true;
    for (int i = 0; i < 26 && ok; ++i)
        if (fr[a[i]] != fr[b[i]])
            ok = !ok;

    if (ok)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}