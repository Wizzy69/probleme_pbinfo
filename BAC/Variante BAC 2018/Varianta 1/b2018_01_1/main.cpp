/*
Subiectul 1:
    1. b
    2.
    a) 55533
    b) 722, -722, 702, -702
    c)
        citeşte n
     (număr întreg)
     m <- 0
     p <- 1
     x <- 0
    ┌dacă n<0 atunci
    │ n <- -n
    └■
    ┌cat timp n!=0 executa
    │ c <- n%10
    │ n <- [n/10]
    │┌dacă c>m atunci
    ││ m <- c
    │└■
    │ x <- m*p+x
    │ p <- p*10
    └■
     scrie x

    d)
*/
#include <iostream>
using namespace std;

int main()
{
    int n, m, x, p;
    cin >> n;
    m = 0;
    x = 0;
    p = 1;
    if (n < 0)
        n = -n;
    do
    {
        int c = n % 10;
        n /= 10;
        if (c > m)
            m = c;
        x = m * p + x;
        p = p * 10;
    } while (n != 0);

    cout << x;
}