/**
 * 1. b.
 * 2.
 * a) 3 10 24
 * i    x   s   j
 * 1    123 0   1
 *          3   2
 * 2    25  0   1
 *          5   2
 *          10  3
 * 3    218 0   1
 *          8   2
 *          16  3
 *          24  4
 * b)  27 44 123
 * c)
 *  
    citeşte x
    s  <-  x % 10
    scrie s
    citeşte x
    s  <-  (x % 10)*2
    scrie s
    citeşte x
    s  <-  (x % 10)*3
    scrie s
    
 * d)
 */

#include <iostream>
using namespace std;

int main()
{
    int x, i, j, s;
    for (i = 1; i <= 3; i++)
    {
        cin >> x;
        s = 0;
        for (j = 1; j <= i; j++)
            s += x % 10;
        cout << s;
    }
    return 0;
}