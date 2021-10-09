#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("nrdiv.in");
    ofstream fout("nrdiv.out");

    int n;
    fin >> n;

    int nr = 0;
    int d;
    for (d = 1; d * d < n; d++)
        if (n % d == 0)
            nr += 2;
    if (d * d == n)
        nr++;
    fout << nr;
}