/*
Subiectul 1:
    1. c
    2. b
    3. a
    4. b
    5. b

Subiectul 2:
    1. 
    SUma puerilor lui k in sirul 1 -> n
    a) 4
    n   k   p   i   x
    10  3   0   1   1
            1   3   3
                6   6
            2       2
                7   7
                8   8
                9   9
            3       3
            4       0
                10  10

    b) 45, 46, 47

    c)
*/
#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int p, i;
    p = 0;
    i = 1;
    while (i <= n)
    {
        int x = i;
        while (x % k == 0)
            x /= k, p++;
        i++;
    }
    cout << p;
    return 0;
}

/*
    d)
    citeşte n,k
    (numere naturale, k număr prim)
     p <- 0
    ┌pentru i <- 1, n execută
    │ x <- i
    │┌cât timp x%k=0 execută
    ││ x <- [x/k]; p<-p+1
    │└■
    └■
    scrie p 

    2. (d.luna < e.dev.luna || (d.luna == e.dev.luna && d.zi < d.dev.zi))
    3. 
    for(i=1;i<=5;i++)
        for(j=1;j<=5;j++)
            if(a[i][j] == 0)
                a[i][j] = a[j][i] = 5 - i;
    
*/