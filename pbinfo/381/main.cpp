#include <iostream>
using namespace std;

bool prim(int x)
{
    if (x == 2)
        return true;
    if (x < 2 || x % 2 == 0)
        return false;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}

bool aproape(int x)
{
    for (int i = 2; i * i < x; i++)
        if (x % i == 0)
        {
            if (prim(i) && prim(x / i))
                return true;
        }
    return false;
}

int main()
{
    int n, nrmax = -1, nrap;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (aproape(x))
        {
            if (x > nrmax)
            {
                nrap = 1;
                nrmax = x;
            }
            else if (x == nrmax)
                nrap++;
        }
    }

    cout << nrmax << " " << nrap;
    return 0;
}