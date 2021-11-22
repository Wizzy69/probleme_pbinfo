#include <iostream>
using namespace std;

void inv(int a, int &b)
{
    b = 0;
    while (a > 0)
    {
        b = b * 10 + a % 10;
        a = a / 10;
    }
}

int main()
{
    int n;
    cin >> n;

    int st = n, dr = n;
    while (true)
    {
        int invers_st, invers_dr;
        inv(st, invers_st);
        inv(dr, invers_dr);
        if (st == invers_st)
        {
            cout << st;
            break;
        }
        if (dr == invers_dr)
        {
            cout << dr;
            break;
        }
        st--;
        dr++;
    }

    return 0;
}