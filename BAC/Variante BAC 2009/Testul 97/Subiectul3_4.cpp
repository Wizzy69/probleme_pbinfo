#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int main()
{

    ifstream f("DATE.TXT");
    int k;
    f >> k;

    int x;
    float y;
    for (x = 1; x <= sqrt(k / 2); x++)
    {
        y = sqrt(k - x * x);
        if (y == (int)y)
            cout << x << " " << y << '\n';
    }

    return 0;
}