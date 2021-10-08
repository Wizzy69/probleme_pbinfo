/**
 * Exercitiul 1:
 *  Raspuns: b)
 * 
 * Exercitiul 2:
 *  a)1
     
    citeşte x,z (numere naturale) 
    y <- 0 
    ┌repetă
    │ y <- y*10+x%10 
    │ x <- [x/100] 
    └până când x=0 
    ┌cât timp y*z>0 şi y%10=z%10 execută
    │ y <- [y/10] 
    │ z <- [z/10] 
    └■
    ┌dacă y+z=0 atunci 
    │ scrie 1 
    │altfel 
    │ scrie 0 
    └■

       x    | z | y 
    729385   532  0
      7293        5
       72         53
       0          532
             53   53
             5    5
             0    0

    b)891
    c) ?

    citeşte x,z (numere naturale) 
    y <- 0 
    ┌repetă
    │ y <- y*10+x%10 
    │ x <- [x/100] 
    └până când x=0

    ┌dacă y-z=0 atunci 
    │ scrie 1 
    │altfel 
    │ scrie 0 
    └■
      d)  
 */

#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> z;
    y = 0;
    do
    {
        y = y * 10 + x % 10;
        x /= 100;
    } while (x != 0);
    while (y * z > 0 && y % 10 == z % 10)
    {
        y /= 10;
        z /= 10;
    }
    cout << (y + z == 0);
}