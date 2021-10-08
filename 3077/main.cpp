#include <iostream>
using namespace std;

int main()
{
    int n;
    long long s = 0;
    cin >> n;
    while (n)
    {
        s += n;
        n /= 10;
    }
    cout << s;
}