#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = n % 10;
    int b = n / 10 % 10;
    int a = n / 100 % 10;
    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }

    if (b > c)
    {
        int aux = b;
        b = c;
        c = aux;
    }

    if (a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }

    cout << a << " " << b << " " << c;
}