#include <iostream>
using namespace std;

int scif(long long n)
{
    if (n < 10)
        return n;
    return scif(n / 10) + n % 10;
}

int nrCif(long long n)
{
    if (n < 10)
        return 1;
    return nrCif(n / 10) + 1;
}

int main()
{
    long long n;
    cin >> n;
    int s = scif(n);
    int nrc = s - nrCif(s);
    cout << s;

    for (int i = 0; i < nrc; ++i)
        cout << 0;
}