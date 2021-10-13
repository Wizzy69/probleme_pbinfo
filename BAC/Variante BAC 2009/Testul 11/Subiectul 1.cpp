/**
 * Exercitiul 1:
 *  Raspuns: c)
 * Exercitiul 2:
 *  a) 15
 * 
 *  n       k       c       p
 * 296385   3       5       1
 * 29638    2       8       5
 * 2963     1       3       15
 * 296      0
 * 
 * b) 86420
 * 
 * d)
 * citeşte n,k (numere naturale)
   p <- 1
   ┌pentru i <- k,1,-1 executa
   │ c <- n%10
   │ ┌dacă c%2=1 atunci
   │ │ p <- p*c
   │ └■
   │ n <- [n/10]
   │ ┌dacă n < 0 atunci
   │ │ i <- 0
   │ └■
   └■
   scrie p

   c)
 */

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int p, c;
    cin >> n >> k;
    p = 1;
    while (n && k)
    {
        c = n % 10;
        if (c % 2 == 1)
            p = p * c;
        n = n / 10;
        k--;
    }
    cout << p;
    return 0;
}