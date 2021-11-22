#include <iostream>
using namespace std;

int dist2(int xa, int ya, int xb, int yb)
{
    return (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
}

int main()
{
    int xa, ya;
    int xb, yb;
    int xc, yc;
    int xd, yd;

    cin >> xa >> ya;
    cin >> xb >> yb;
    cin >> xc >> yc;
    cin >> xd >> yd;

    if (
        dist2(xa, ya, xb, yb) == dist2(xb, yb, xc, yc) &&
        dist2(xc, yc, xd, yd) == dist2(xd, yd, xa, yb))
        cout << "da";
    else
        cout << "nu";
}