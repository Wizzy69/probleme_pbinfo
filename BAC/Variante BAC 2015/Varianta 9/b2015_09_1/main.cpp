/*
Subiecul 1:
1. c
2.
Afiseaza puterea maxima la care apare k in sirul [1,n].
a) 2
b)
cea mai mica: 125
cea mai mare: 624
c)
citeşte n,k
(numere naturale, k>1)
pm <- 0

┌pentru i <- 1,n execută
│ x <- i
│ p <- 0
│┌cât timp x%k=0 execută
││ x <- [x/k]
││ p <- p+1
│└■
│┌dacă p>pm atunci
││ pm <- p
│└■
└■
scrie pm

*/

#include <iostream>
using namespace std;

int main()
{
    int n, k, pm = 0;
    cin >> n >> k;
    int i = 1;
    while (i <= n)
    {
        int x = i, p = 0;
        while (x % k == 0)
        {
            x /= k;
            p++;
        }
        if (p > pm)
            pm = p;

        i++;
    }
    cout << pm;
    return 0;
}