/**
 * 
 * Exercitiul 1:
 *  Raspuns: a)
 * 
 * Exercitiul 2:
 *  a. 9
 *  n   s
 * 9321 -1
 *  932  1
 *    0  9
 *  
 * b. 9867
 * c. 
 * citeşte n (număr natural)  
   ┌daca n=0 atunci 
   |  scrie -1
   │altfel
   |  s <- -1
   │ ┌execută
   │ │┌dacă n%10>s atunci 
   │ ││ s <- n%10 
   │ ││altfel 
   │ ││ s <- 11 
   │ │└■ 
   │ │ n <- [n/10] 
   │ └cât timp n>0
   |  scrie s
   └■
   d)
 */

#include <iostream>

using namespace std;
int main()
{
    int n, s = -1;
    cin >> n;

    while (n > 0)
    {
        if (n % 10 > s)
            s = n % 10;
        else
            s = 11;
        n /= 10;
    }

    cout << s;

    return 0;
}