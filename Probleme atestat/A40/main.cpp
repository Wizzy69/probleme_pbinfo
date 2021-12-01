#include <iostream>
using namespace std;

int data_corecta(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (m1 < 1 || m1 > 12 || m2 > 12 || m2 < 1)
        return 0;
    if (d1 < 1 || d2 < 1)
        return 0;
    if (y1 % 400 || (y1 % 4 == 0 && y1 % 100 != 0)) // este an bisect
    {
        if (m1 == 2 && d1 > 29)
            return 0;
    }
    else //y1 nu este bisect
        if (m1 == 2 && d1 > 28)
        return 0;

    if (y2 % 400 || (y2 % 4 == 0 && y2 % 100 != 0)) // este an bisect
    {
        if (m2 == 2 && d2 > 29)
            return 0;
    }
    else //y2 nu este bisect
        if (m1 == 2 && d1 > 28)
        return 0;

    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
    {
        if (d1 != 31)
            return 0;
    }
    else if (d1 != 30)
        return 0;
    if (m2 == 1 || m2 == 3 || m2 == 5 || m2 == 7 || m2 == 8 || m2 == 10 || m2 == 12)
    {
        if (d1 > 31)
            return 0;
    }
    else if (d2 > 30)
        return 0;
    return 1;
}

int main()
{
    int d1, d2;
    int m1, m2;
    int y1, y2;

    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;

    if (data_corecta(d1, m1, y1, d2, m2, y2) == 1)
    {
        if (y1 > y2)
        {
            cout << y1 - y2 << " ani";
            return 0;
        }
        else
        {
            cout << y2 - y1 << " ani";
            return 0;
        }
    }
    else
        cout << "data invalida";
    return 0;
}