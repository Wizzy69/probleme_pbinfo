#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("file.in");
    ofstream fout("file.out");

    int n, m, x, y;
    ofstream aux("a.txt");

    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        fin >> x;
        aux << x << " ";
    }
    aux.close();
    ifstream f("a.txt");
    int i, j;
    i = j = 1;
    f >> x;
    fin >> y;
    while (i <= n && j <= m)
        if (x < y)
        {
            fout << x << " ";
            f >> x;
            i++;
        }
        else
        {
            fout << y << " ";
            fin >> y;
            j++;
        }
    while (i <= n)
    {
        fout << x << " ";
        f >> x;
        i++;
    }
    while (j <= m)
    {
        fout << y << " ";
        fin >> y;
        j++;
    }

    return 0;
}