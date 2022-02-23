/*
Subiectul 1:
    1. d
    2.
    Numara cate dintre cele n elemente date sunt divizibile cu 2^a
    a) 2
    b) 36, 44, 52, 68
    c)
    citeşte n,a
         (numere naturale nenule)
    nr <- 0
    ┌pentru i <- 1, n execută
    | citeşte b
    | (număr natural nenul)
    | c <- 0
    │┌cât timp b%2=0 execută
    ││ b <- [b/2]
    || c <- c+1
    │└■
    │┌dacă c=a atunci
    ││ nr <- nr+1
    │└■
    └■
     scrie nr



*/

#include <iostream>
using namespace std;

int main()
{
    int n, a, b, nr, i;
    cin >> n >> a;
    nr = 0;
    i = 1;
    while (i <= n)
    {
        cin >> b;
        int c = 0;
        while (b % 2 == 0)
        {
            b /= 2;
            c++;
        }
        if (c == a)
            nr++;
        i++;
    }

    cout << nr;
    return 0;
}