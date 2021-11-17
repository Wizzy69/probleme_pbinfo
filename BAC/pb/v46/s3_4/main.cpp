#include <iostream>
#include <cmath>
using namespace std;

void cifre(int nr, int &nc, int &sc);

void cifre(int nr, int &nc, int &sc)
{
    sc = nc = 0;
    do
    {
        sc += nr % 10;
        nc++;
        nr /= 10;
    } while (nr);
}

int main()
{
    int n;
    cin >> n;
    int p = 1;
    int aux;
    do
    {
        //12345
        int c = n / (10 * p) %10;
        aux = n / (10 * p) + n % 10;

    } while (n);
}