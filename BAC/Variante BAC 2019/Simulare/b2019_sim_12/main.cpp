/*
Subiectul 1:
    1. d
    2. d
    3. a
    4. b
    5. c

Subiectul 2:
    Afiseaza cel mai mare numar din intervalul [a,b] care are in componenta sa
k la cea mai mica putere
    a) 12
    b) 2016, 2019
    c)
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b, p, x, k, y, pm, i;
    cin >> a >> b >> k;
    pm = y = 0;
    i = b;
    while (i >= a)
    {
        x = i;
        p = 0;
        while (x % k == 0)
        {
            x /= k;
            p++;
        }
        if (p != 0 && (p < pm || pm == 0))
        {
            pm = p;
            y = i;
        }
        i--;
    }
    cout << y;
}

/*
    d)
    citeşte a,b,k
        (numere naturale, 1≤a≤b, k>1)
 pm <- 0; y <- 0;
┌pentru i <- b, a, -1 execută
│ x <- i; p <- 0
│┌cât timp x%k=0 execută
││ x <- [x/k]; p <- p+1
│└■
│┌dacă p≠0 și (p<pm sau pm=0)atunci
││ pm <- p; y <- i
│└■
└■
 scrie y 

    2.
    struct eveniment{
        struct{
            int zi, luna;
        }data;
        int id;
    }e;

    3.
    for(i=0;i<5;i++)
         for(j=0;j<5;j++) 
            if(j==0)
                a[i][0] = 2*i;
            else a[i][j] = a[i][j-1]+1;


*/