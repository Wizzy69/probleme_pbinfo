/*
Subiectul 1:
1. c
2. a) 14
   b) 18 18
    c)
citeşte a,b
 (numere naturale nenule, a≤b)
 s <- 0
 x <- a
┌cat timp x<=b execută
│┌pentru j <- 1,[x/2] execută
││ ┌dacă x%j=0 și []*[]=j atunci
││ │ s <- s+j
││ └■
│└■
| x <- x+ 1
└■
scrie s
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, s;
    s = 0;
    cin >> a >> b;
    for (int x = a; x <= b; x++)
        for (int j = 1; j <= x / 2; j++)
            if (x % j == 0 && (int)sqrt(j) * (int)sqrt(j) == j)
                s += j;
    cout << s;
}
