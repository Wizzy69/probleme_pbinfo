#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m;
    ifstream fin("interclasare2.in");
    fin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        fin >> a[i];
    fin >> m;
    int *b = new int[m];
    for (int i = 0; i < m; i++)
        fin >> b[i];

    int i, j;
    i = j = 0;
    int af = 0;
    ofstream fout("interclasare2.out");
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            fout << a[i] << " ";
            i++, j++;
            af++;

            if (af == 10)
            {
                fout << '\n';
                af = 0;
            }
        }
    }
}