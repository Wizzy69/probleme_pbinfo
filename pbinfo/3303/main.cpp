#include <iostream>
#include <fstream>
using namespace std;
struct date
{
    int x;
    int nr_cifre;
    int oglindit;
    int urma;
    bool curat;
};

void oglindit(date &d)
{
    d.nr_cifre = 0;
    d.oglindit = 0;
    int n = d.x;
    while (n)
    {
        d.oglindit = d.oglindit * 10 + n % 10;
        n /= 10;
        d.nr_cifre++;
    }
}

void urma(date &d)
{
    int lim = 0;
    for (int _ = 0; _ < d.nr_cifre; ++_)
    {
        lim = lim * 10 + 9;
    }

    d.urma = lim - d.x;
    d.curat = d.urma == d.oglindit;
}

void calcul(date &d)
{
    oglindit(d);
    urma(d);
}

int main()
{
    ifstream fin("nrcurat.in");
    ofstream fout("nrcurat.out");

    int x;
    while (fin >> x)
    {
        date d = {x, 0, 0, 0, true};

        calcul(d);

        fout << d.curat << " ";
    }
}