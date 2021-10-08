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
    int x[1000][1000][1000] = {0};
    int cmmdcMAX = -1;
    int n;
    int a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int c = cmmdc(a, b);
        if (cmmdcMAX < c)
        {
            cmmdcMAX = c;
        }
    }
}