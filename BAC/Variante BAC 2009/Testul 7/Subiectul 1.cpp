/**
 * Exercitiul 1:
 *  Raspuns: d)
 * Exercitiul 2:
 *  a. 9432
 *    n    nr   a    m
 * 232493  0    9   232493
 *         9    8   232493
 *         94   4   2324
 *         943  3   232493
 *         9432 2   232
 * 
 * b. 9654, 4569
 * c. 
 * citeşte n (număr natural nenul) 
    nr <- 0 
    a <- 9
   ┌execută
   │ m <- n 
   │┌cât timp m≠0 şi m%10≠a execută 
   ││ m <- [m/10] 
   │└■
   │┌dacă m≠0 atunci 
   ││ nr <- nr*10+m%10 
   │└■ 
   | a <- a-1
   └pana cand a < 0
     scrie nr
 
 * d)
 */

#include <iostream>

using namespace std;

int main()
{
    int n, nr, m;
    cin >> n;
    nr = 0;
    for (int a = 9; a >= 0; --a)
    {
        m = n;
        while (m != 0 && m % 10 != a)
            m /= 10;
        if (m != 0)
            nr = nr * 10 + m % 10;
    }
    cout << nr;

    return 0;
}