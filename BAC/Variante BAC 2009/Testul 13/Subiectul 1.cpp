/**
 * Exercitiul 1:
 *  Raspuns: b)
 * 
 * Exercitiul 2:
 *  a) 7
 *  a    b    k    i   n   c
 * 404  413   0   404 404  0
 *                405 405  0
 *            1        0   1
 * => Numere care au cel putin o cifra impara din intervalul [a,b]
 * b) 63, 64
 * d) 
 * citeşte a,b 
    (numere naturale, a≤b) 
    k <- 0
    i <- a 
   ┌cat timp (i <= b)
   │ n <- i; c <- 0 
   │ ┌cât timp n>0 execută
   │ │ ┌dacă n%2=1 atunci 
   │ │ │ c <- c+1 
   │ │ └■
   │ │ n <- [n/10] 
   │ └■
   │ ┌dacă c>0 atunci 
   │ │ k <- k+1 
   │ └■
   | i <- i+1
   └■
   scrie k

   c)
 */

#include <iostream>

using namespace std;
int main()
{
    int a, b, k, n, c;
    cin >> a >> b;
    k = 0;
    for (int i = a; i <= b; i++)
    {
        n = i;
        c = 0;
        while (n > 0)
        {
            if (n % 2 == 1)
                c++;
            n /= 10;
        }
        if (c > 0)
            k++;
    }
    cout << k;
    return 0;
}