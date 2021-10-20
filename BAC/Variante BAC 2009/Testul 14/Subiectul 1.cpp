/**
 * Exercitiul 1:
 *  Raspuns: a
 * 
 * Exercitiul 2:
 * a) 27596
 * x    n   y   c
 * 12   0   12  0
 *           1  2
 *      2   0   2
 * 7    2   7   0
 *     27   0   7
 * 354      354 0
 *           35 4
 *            3 5
 *            0 
 *     275
 * 
 * => Algoritmul formeaza un numar cu cele mai mari cifre ale numerelor citite in x.
 * Daca pentru x se citeste 0, algoritmul se opreste fara a il mai lua in seama
 * 
 * b) 172 151 100 0
 * d) 
 * citeşte x
    (număr natural)
    n <- 0
    ┌daca cât timp x≠0 atunci
    | ┌execută
    | │ y <- x; c <- 0
    | │ ┌execută
    | │ │ ┌dacă y%10>c atunci
    | │ │ │ c <- y%10
    | │ │ └■
    | │ │ y <- [y/10]
    | │ └cât timp y>0  => y nu are cum sa fie 0 la inceput, deoarece avem mai sus y <- x, dar avem conditia ca x != 0 de la inceput
    | │ n <- n*10+c
    | │ citeşte x
    | └cât timp x≠0 
    └■
    scrie n 
    c)
 */

#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> x;
    n = 0;
    while (x != 0)
    {
        int y = x;
        int c = 0;
        while (y > 0)
        {
            if (y % 10 > c)
                c = y % 10;
            y /= 10;
        }

        n = n * 10 + c;
        cin >> x;
    }
    cout << n;
    return 0;
}