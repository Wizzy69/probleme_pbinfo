/*
Subiectul 1:
1. b

2. Gaseste toate numerele x din intervalul [1,n]
pentru care x se imparte ori la a ori la b , dar nu si la a*b.
a) 3 4 6 8 9 15
b) 1,1,1
   2,2,2
c)
citeşte n,a,b
 (numere naturale nenule, a≤n, b≤n)
 ok <- 0
┌pentru x <- 1, n execută
│┌dacă x%a=0 şi x%b≠0 sau
││ x%a≠0 şi x%b=0 atunci
││ scrie x,’ ’
││ ok <- 1
│└■
└■
┌dacă ok=0 atunci
│ scrie 0
└■
d)
*/

#include <iostream>
using namespace std;
int main()
{
    int a, n, b;
    cin >> n >> a >> b;
    int ok = 0, x = 1;
    while (x <= n)
        if (x % a == 0 && x % b != 0 ||
            x % a != 0 && x % b == 0)
        {
            cout << x << " ";
            ok = 1;
        }

    if (ok == 0)
        cout << 0;
    return 0;
}
