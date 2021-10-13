#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = n % 10;
    int b = n / 10 % 10;
    int a = n / 100 % 10;
    //321
    if(a > b)
    {
        int aux = a;
        a = b;
        b = aux;
    }
    //231
    if(b > c)
    {
        int aux = b;
        b = c;
        c = aux;
    }
    //213
    if(a>b)
    {
        int aux = a;
        a = b;
        b = aux;
    }

    cout << b;
}