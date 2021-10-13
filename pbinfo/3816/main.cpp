#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
    {
        if (b == d)
            cout << "Grafice echivalente";
        else
            cout << "Grafice paralele";
    }
    else
    {
        double x = (d - b) / (a - c);
        double y = a * x + b;
        cout << x << " " << y;
    }
    return 0;
}