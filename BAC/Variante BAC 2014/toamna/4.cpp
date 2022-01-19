#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int x, n, fr[10] = {0};
    ifstream fin("bac.txt");
    fin >> n;
    while (fin >> x)
    {
        int p = 0;
        while (x > 1)
            x /= 10, p++;
        fr[p]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (n - fr[i] >= 0)
            n -= fr[i];
        if(n==0)
        {
            int p = 1;
            while(i > 0)
                p *= 10, i--;
            cout << p;
            break;
        }
        
    }

    return 0;
}