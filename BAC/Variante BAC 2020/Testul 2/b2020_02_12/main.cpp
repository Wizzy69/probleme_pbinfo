/*
    Subiectul 1:
        1. a
        2. d
        3. a
        4. b
        5. c
    
    Subiectul 2:
    1.
    a) 2020
        n   m       i   x
        5   0       1   127
            0           0
                    2   2019
            20          20
                    3   1005
            120         100
                    4   7
                        0
                    5   1900
            2020

    b) 1234 2345

    c)
*/
#include <iostream>
using namespace std;

int main()
{
    int n, x, m;
    cin >> n;
    m = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        while (x % 10 > x / 10 % 10)
            x /= 10;
        m += x;
    }
    if (m > 0)
        cout << m;
    else
        cout << "niciunul";

    return 0;
}

/*
    d) 
     citește n (număr natural nenul)
     m<-0
     i<-1
    ┌cat timp i <= n execută
    │ citește x (număr natural)
    │┌cât timp x%10 > [x/10]%10 execută
    ││ x<-[x/10]
    │└■
    │ m<-m+x
    | i <- i + 1
    └■
    ┌dacă m>0 atunci scrie m
    │altfel scrie „niciunul”
    └■

    2. 
    struct figura
    {
        double raza;
        struct
        {
            double x, y;
        }centru;
    }c;

    3.
    for(i=0;i<7;i++)
        for(j=0;j<7;j++)
            if(i == j)
                a[i][j] = 'a';
            else if (i > j)
                a[i][j] = '+';
            else a[i][j] = a[i][j-1] + 1;
*/
