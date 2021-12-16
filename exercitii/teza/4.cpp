/*

    cele mai mici 2 nr
    a,b
    a < b
8 9 12 8 4 10 23 1 9 3 7 14 65 78 5 0
    a=b=9999999;
    if(a[i] < a && a[i] < b)
        b = a;
        a = a[i];
    else if(a[i] > a && a[i] < b)
        b = a[i];
    
    a        b
    999999   999999
    8        999999
    1        3

    cout << a << " " << b;

    

8 9 12 8 4 10 23 1 9 3 7 14 65 78 5 0
a > b > c
if(a[i] > a && a[i] > b && a[i] > c)
{
    c=b;
    b=a;
    a=a[i];
}
else if(a[i] < a && a[i] > b && a[i] > c)
{
    c=b;
    b=a[i];
}
else if(a[i] < a && a[i] < b && a[i] > c)
    c=a[i];
*/

/*
Se da un sir de numere din fisier.
Sa se calculeze suma elementelor pare din sir.

Sa se scrie un program c++ eficient din punct de vedere al memoriei.
*/

#include <fstream>
#include <iostream>
using namespace std;

int scif(int x)
{
    if (x < 10)
        return x;
    return x % 10 + scif(x / 10);
}

int main()
{
    ifstream fin("sir.in");
    int x;
    int s = 0;
    while (fin >> x)
    {
        if (x % 2 == 0)
            s += scif(x);
    }
    cout << s;
}