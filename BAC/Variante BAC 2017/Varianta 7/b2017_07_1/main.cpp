/**
Subiectul 1:
1. c
2.
a) 15
n   k   i   x   y
5   0   1   5   2
                3
                4
                5
    1   2   24  2
    12  3   3
        4   45  2
                3
    15  5

b) 107 111 157
c)
citeşte n
 (număr natural nenul)
 k <- 0
┌pentru i <- 1,n execută
│ citeşte x
│ (număr natural nenul)
│ y <- 2
│┌cât timp x>1 și x%y≠0 execută
││ y <- y+1
│└■
│┌dacă k<[x/y] atunci
││ k <- [x/y]
│└■
└■
 scrie k

 d)
*/
#include <iostream>

using namespace std;

int main()
{
    int n,k,x,y,i;
    cin>>n;
    i=1;
    k=0;
    while(i<=n)
    {
        cin>>x;
        y=2;
        while(x>1 && x%y!=0)
            y++;
        if(k<x/y)k=x/y;
        i++;
    }
    cout << k;
    return 0;
}
