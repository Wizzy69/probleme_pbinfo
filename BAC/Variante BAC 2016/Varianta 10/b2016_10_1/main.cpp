/*
Subiectul 1:
1. d
2.
a) 14 28
Algoritmul gaseste cel mai mic numar mai mare decat m care se divide la x si cel mai mare
numar mai mic decat n cu aceasta proprietate.
m   n   x   p
11  30  7   0
12  29      7
13  28
14

b) 14 16 15
c)
citeşte m,n,x
 (numere natural nenule, m<n)
 p <- 0
┌execută
│┌dacă m%x=0 şi n%x=0 atunci
││ p <- x
││altfel
││┌dacă m%x=0 atunci
│││ n <- n-1
│││altfel
│││ m <- m+1
││└■
│└■
└cât timp m<n şi p=0
 scrie m,’ ’,n
d)
*/
#include <iostream>
using namespace std;

int main()
{
    int n, m, x, p;
    p = 0;
    cin >> m >> n >> x;
    while (m < n && p == 0)
    {
        if (m % x == 0 && n % x == 0)
            p = x;
        else
        {
            if (m % x == 0)
                n--;
            else
                m++;
        }
    }
    cout << m << ' ' << n;
    return 0;
}