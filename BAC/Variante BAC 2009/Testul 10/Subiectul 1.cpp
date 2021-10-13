/**
 * Exercitiul 1:
 *  Raspuns: a)
 * Exercitiul 2:
 * a) 24
 *  n       k       nr      p
 * 23456    3       0       1
 *          2
 * 2345             4       10
 * 234      1
 * 233              24      100
 * 2        0
 * 0
 * 
 * b)233456 3
 *   23345 2
 * 
 * c)
     citeşte n,k
     (numere naturale nenule)
     nr <- 0
     p <- 1
    ┌execută
    │┌dacă n%2≠0 atunci
    ││ nr <- nr + [n/10]%10*p
    ││ p <- p*10
    ││altfel
    ││ k <- k-1
    │└■
    │ n <- [n/10]
    └cât timp n≠0 şi k≠0 
    scrie nr 
    
    d)
 */

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int nr, p;

    nr = 0;
    p = 1;

    while (n && k)
    {
        if (n % 2 != 0)
        {
            nr += n / 10 % 10 * p;
            p *= 10;
        }
        else
            k--;
        n /= 10;
    }

    cout << nr;
    return 0;
}