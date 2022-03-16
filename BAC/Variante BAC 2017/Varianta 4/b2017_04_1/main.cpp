/*
Subiectul 1:
    1. a
    2.
a) #2#1#3#2#
    n   i   j
    3   1   1
            2
            3
        2   1
            2
            3
        3   1
            2
            3
b) 50
c)

    citeşte n
     (număr natural nenul)
     i <- 1
    ┌cat timp i<=n execută
    │┌pentru j <- 1,n execută
    ││┌dacă i=j sau i+j=n+1 atunci
    │││ scrie ’#’
    │││altfel
    │││ scrie j
    ││└■
    │└■
    | i <- i + 1
    └■

d)
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j || i + j == n + 1)
                cout << "#";
            else
                cout << j;
    return 0;
}
