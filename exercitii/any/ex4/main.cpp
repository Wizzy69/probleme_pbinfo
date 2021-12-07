/*
    Nr reale din bac.in
    cea mai lunga secventa de valori care au acelasi numar de zecimale
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int nrzec(double x)
{
    int cnt = 0;
    while (x != (int)x)
    {
        cnt++;
        x *= 10;
    }
    return cnt;
}

int main()
{
    cout << nrzec(4.1241);

    /*
    ifstream fin("bac.in");
    double x, y, xmax, ymax;
    int nr = 0, nrmax = 0;
    fin >> x;
    while (fin >> y)
    {
        int a = nrzec(x);
        int b = nrzec(y);
        if (a == b) // au acelasi numar de zecimale
            nr++;
        else if (nr >= nrmax)
            nrmax = nr, nr = 0, xmax = x, x = y;
    }

    ofstream fout("bac.out");
    fout << xmax << " " << ymax << " " << nrmax;
*/
    return 0;
}
