#include <iostream>

using namespace std;

struct elem
{
    int ap = 0;
    int nr = 0;
} fr[11];

int main()
{
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        while (x)
        {
            fr[x % 10].ap++;
            fr[x % 10].nr = x % 10;
            x /= 10;
        }
    }

    for (int i = 0; i < 9; i++)
        for (int j = i + 1; j < 10; j++)
            if (fr[i].ap > fr[j].ap)
            {
                elem aux = fr[i];
                fr[i] = fr[j];
                fr[j] = aux;
            }
            else if (fr[i].ap == fr[j].ap && fr[i].nr > fr[j].nr)
            {
                elem aux = fr[i];
                fr[i] = fr[j];
                fr[j] = aux;
            }
    for (int i = 0; i < 10; i++)
    {
        while (fr[i].ap == 0)
            i++;
        cout << fr[i].nr << " ";
    }

    return 0;
}