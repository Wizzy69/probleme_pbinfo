/**
 * Exercitiul 1:
 *   Raspuns: b)
 * 
 * Exercitiul 2:
    a)599350
        citeşte z,x 
        (numere naturale nenule) 
        ┌cât timp x>0 execută
        │ citeşte y (număr natural)
        │ ┌dacă z<y-x atunci 
        │ │ scrie x%10 
        │ │altfel 
        │ │ scrie y%10 
        │ └■
        │ x <- y
        └■

    z | x | y
    2   5   16
        16  9
        9   12
        12  13
        13  5
        5   0
        0

    b) 1 7 9 3 1 0
    c)
        citeşte z,x 
            (numere naturale nenule) 
        ┌execută
        │ citeşte y (număr natural)
        │ ┌dacă z<y-x atunci 
        │ │ scrie x%10 
        │ │altfel 
        │ │ scrie y%10 
        │ └■
        │ x <- y
        └cât timp x>0
    
    d)
*/

#include <iostream>
using namespace std;
int main()
{
    int z, x, y;
    cin >> z >> x;
    while (x > 0)
    {
        cin >> y;
        if (z < y - x)
            cout << x % 10;
        else
            cout << y % 10;

        x = y;
    }
}