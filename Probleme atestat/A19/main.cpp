#include <iostream>
#include <fstream>
using namespace std;

pair<int, int> SDP(int **a, int n)
{
    int s = 0, s2 = 0;
    for (int i = 0; i < n; i++)
        s += a[i][i], s2 += a[i][n - i - 1];
    return make_pair(s, s2);
}

int SL(int **a, int n)
{
    auto s = SDP(a, n);
    int sDP = s.first;
    int sDS = s.second;
    if (sDP != sDS)
        return 0;
    for (int i = 0; i < n; i++)
    {
        int sl, sc;
        sl = sc = 0;
        for (int j = 0; j < n; j++)
            sl += a[i][j], sc += a[j][i];
        if (sl != sDS || sl != sDP || sl != sc || sc != sDS || sc != sDP)
            return 0;
    }
    return 1;
}

int main()
{
    ifstream fin("mat.in");
    int n;
    fin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }

    int rez = SL(a, n);
    if (rez == 1)
        cout << "da";
    else
        cout << "nu";
}