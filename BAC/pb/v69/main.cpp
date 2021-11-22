#include <iostream>
using namespace std;

int calcul(int n)
{
    int dif = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
            dif++;
        else
            dif--;
        n = n / 10;
    }

    if (dif < 0)
        dif *= -1;
    return dif;
}

int main()
{
    int n;
    cin >> n;

    int m = n;
    while (true)
    {
        if (!calcul(m))
            break;
        m++;
    }

    cout << m;

    return 0;
}