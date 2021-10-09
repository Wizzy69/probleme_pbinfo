/**
 * Exercitiul 1:
 *  Raspuns: d)
 * 
 * Exercitiul 2:
 * a) 2211775
    citeşte x (număr natural nenul)
    ┌cât timp x>0 execută
    │ citeşte y (număr natural)
    │┌dacă x>y atunci 
    ││ scrie x%10 
    ││altfel 
    ││ scrie y%10 
    │└■
    │ x <- y
    └■

    x    |   y
    17      22
    22      13
    13      101
    101     2
    2       7
    7       5
    5       0
    0
    
    b) 19 18 7 17 0
    c)

    citeşte x (număr natural nenul)
    ┌execută
    │ citeşte y (număr natural)
    │┌dacă x>y atunci 
    ││ scrie x%10 
    ││altfel 
    ││ scrie y%10 
    │└■
    │ x <- y
    └cât timp x>0 

    Stim ca x != 0 (din datele problemei)
    d)
 */

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    while (x > 0)
    {
        cin >> y;
        if (x > y)
            cout << x % 10;
        else
            cout << y % 10;
        x = y;
    }
}