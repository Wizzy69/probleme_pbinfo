#include <iostream>
#include <fstream>

using namespace std;

bool verifVecini(int n)
{
    while (n > 99)
    {
        if ((n / 10 % 10 >= n % 10 && n / 10 % 10 <= n / 100 % 10) ||
            (n / 10 % 10 <= n % 10 && n / 10 % 10 >= n / 100 % 10))
            return false;
        n /= 10;
    }

    return true;
}

int nrCif(int n)
{
    if (n < 10)
        return 1;
    return 1 + nrCif(n / 10);
}

int main()
{
    int n;
    ifstream fin("joc8.in");
    fin >> n;
    int nr = 0;
    ofstream fout("joc8.out");
    for (int i = 0; i < n; ++i)
    {
        int x;
        fin >> x;
        if (nrCif(x) % 2 == 1 && verifVecini(x))
            nr++;
    }
    fout << nr;
}