#include <iostream>
using namespace std;

int FormNewNr(int x, int cif_elim_DS)
{
    if (x < 10)
        if (cif_elim_DS == 0)
            return 0;
        else
            return x;

    if (cif_elim_DS == 0)
        return FormNewNr(x / 10, cif_elim_DS - 1) * 10;
    return FormNewNr(x / 10, cif_elim_DS - 1) * 10 + x % 10;
}

int nrCif(int n)
{
    if (n < 10)
        return 1;
    return nrCif(n / 10) + 1;
}

int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    int len = nrCif(n);
    for (int i = 0; i < len; i++)
    {
        int nr = FormNewNr(n, i); /* i=0 -> cifra unitatilor | i=1 -> cifra zecilor .... */
        if (nr % 3 == 0)
            cnt++;
    }

    cout << cnt;
}