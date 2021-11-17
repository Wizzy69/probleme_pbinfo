#include <iostream>
using namespace std;

int cmdiv(int x, int y)
{
    while(y)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}


int main()
{
    int n, nrf = 0;
    cin >> n;
    for (int i = 1; i <= n;i++)
    {
        if(cmdiv(i, n) == 1)
            nrf++;
    }
    cout << nrf;
}