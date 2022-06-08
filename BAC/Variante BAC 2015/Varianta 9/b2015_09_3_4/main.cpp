#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int x, fr[100] = {0}, m, ok = 0;
    while (fin >> x)
        fr[x]++;
    m = 0;

    while (fr[m] == 0)
        m++;

    for (int i = m; i <= 100; i++)
    {
        if (fr[i] != 0)
        {
            if (i - m >= 2)
            {
                cout << m << " " << i << "\n";
                ok = 1;
            }
            m = i;
        }
    }

    if (ok == 0)
        cout << "nu exista";
    return 0;
}