/*
Subiectul 1:
1. a
2.
a) 16
    Face suma celor mai mici divizori (>1) pentru toate numerele
din intervalul [a,b].
    a   b   c   s   x
    7   4
    4   7   2   0   4
            2   2   5
            3
            4
            5   7   6
            2   9   7
            2
            3
            4
            5
            6
            7   16
b) (4,5), (5,4), (7,7), (5,6)
c)
citeşte a,b
(numere naturale, a≥2, b≥2)
┌dacă a>b atunci
│ x <- a
│ a <- b
│ b <- x
└■
s <- 0
┌pentru x <- a,b execută
│ c <- 2
| ┌daca x%c>0 atunci
│ |  ┌execută
│ |  │ c <- c+1
│ |  └cât timp x%c>0
| └■
│s <- s+c
└■
scrie s

d)
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, x, s, c;
    cin >> a >> b;
    if (a > b)
    {
        x = a;
        a = b;
        b = x;
    }
    s = 0;
    for (x = a; x <= b; x++)
    {
        c = 2;
        while (x % c > 0)
            c++;
        s += c;
    }
    cout << s;
    return 0;
}