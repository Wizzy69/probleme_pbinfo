/**
 * Exercitiul 1:
 *  Raspuns b)
 * 
 * Exercitiul 2:
 *  a. 22
 *   n      k   nr  p
 * 932125   3   0   1
 * 93212    2   2   10
 * 9321     1
 * 932          22  100
 * 93       0
 * 9    
 * b. 22221 1
 * c. 
 * citeşte n (număr natural nenul) 
    nr <- 0 
   ┌pentru a <- 9,0,-1 execută
   │ m <- n 
   | ┌daca m≠0 şi m%10≠a atunci
   │ │  ┌execută 
   │ │  │ m <- [m/10] 
   │ │  └cât timp m≠0 şi m%10≠a
   | └■ 
   │┌dacă m≠0 atunci 
   ││ nr <- nr*10+m%10 
   │└■ 
   └■
    scrie nr
 * d)
 */

#include <iostream>

using namespace std;

int main()
{
    int n, k, nr;
    nr = 0;
    int p = 1;
    cin >> n >> k;
    while (n != 0 && k != 0)
    {
        if (n % 2 == 0)
        {
            nr = nr + n % 10 * p;
            p *= 10;
        }
        else
            k--;
        n /= 10;
    }
    cout << nr;
    return 0;
}