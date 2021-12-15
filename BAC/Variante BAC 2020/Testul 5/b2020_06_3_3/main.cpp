#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("bac.in");
    int min, max;
    min = 100;
    max = 9;
    int x;
    while (fin >> x)
    {
        if (x > 9 && x < 100)
        {

            if (x < min)
                min = x;
            if (x > max)
                max = x;
        }
    }
    if (min == 9999999999 || max == -1)
        cout << "nu exista";
    else
        cout << min - 1 << " " << max + 1;

    return 0;
}