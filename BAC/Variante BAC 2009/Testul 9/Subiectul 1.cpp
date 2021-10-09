/**
 * Exercitiul 1:
 * Raspuns: b)
 * 
 * Exercitiul 2:
 *  a. 1 
 *  n      s
 * 1239    10
 *  123     9
 *   12     3
 *    1     2
 *    0     1
 * b.1000
 * c. 
 * citeşte n (număr natural) 
   s <- 10 
   ┌daca n>0 atunci
   │ ┌execută
   | │┌dacă n%10<s atunci 
   | ││ s <- n%10 
   | ││altfel 
   | ││ s <- -1 
   | │└■ 
   | │ n <- [n/10] 
   | └cât timp n>0
   └■
    scrie s
    d)
 */

#include <iostream>

using namespace std;
int main()
{
    int n, s;
    s = 10;
    cin >> n;

    while (n > 0)
    {
        if (n % 10 < s)
            s = n % 10;
        else
            s = -1;
        n /= 10;
    }
    cout << s;
    return 0;
}