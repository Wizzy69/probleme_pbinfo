/*
Subiectul 1:
    1. a
    2.
    a) 135*234*#
    n   x   y   z
    9   1   2   6
            3   5
            4
        2   3   4

    b) 6
    c)
    citeşte n
         (număr natural)
    x <- 1
   ┌pentru x <- 1, [n/3] execută
   │ y <- x+1
   │┌cât timp y≤[n/3] execută
   ││ z <- n-x-y
   ││┌dacă z%2=x%2 atunci
   │││ scrie x,y,z,’*’
   ││└■
   ││ y <- y+1
   │└■
   └■
   scrie ’#’

*/
#include <iostream>
using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n;
    x = 1;
    while (x <= n / 3)
    {
        y = x + 1;
        while (y <= n / 3)
        {
            z = n - x - y;
            if (z % 2 == x % 2)
                cout << x << y << z << '*';
            y++;
        }
        x++;
    }
    cout << '#';
    return 0;
}

