#include <iostream>
using namespace std;

int main()
{
    double a = 0;
    for (int i = 1; i <= 9; i++)
        a += 0.1;

    if (a == 1)
        cout << "da";
    else
        cout << "nu";

    return 0;
}
