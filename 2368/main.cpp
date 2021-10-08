#include <iostream>

using namespace std;
int cmmdc(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    long long D = cmmdc(a, b);
    long long M = a * b / D;
    cout << D << " " << M;
}
