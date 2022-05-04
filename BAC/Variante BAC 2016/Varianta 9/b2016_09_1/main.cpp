/*
Subiectul 1:
1. a
2. Determina cel mai mare numar din intervalul [1,n] care este un numar de forma 2^k
a) 8
b) 16, 31
c)
    citeşte n
        (număr natural nenul)
    p <- 0
    i <- 1
    ┌executa
    │ m <- i
    │┌cât timp m%2=0 execută
    ││ m <- [m/2]
    │└■
    │┌dacă m=1 atunci
    ││ p <- i
    │└■
    | i <- i + 1
    └cat timp i<=n
     scrie p
d)
*/
#include <iostream>
using namespace std;

int main()
{
    int n, p = 0, m;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m = i;
        while (m % 2 == 0)
        {
            m /= 2;
        }
        if (m == 1)
        {
            p = i;
        }
    }
    cout << p;
    return 0;
}