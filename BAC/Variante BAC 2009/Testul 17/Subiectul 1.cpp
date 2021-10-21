/**
 * Exercitiul 1:
 *  Raspuns: b
 * 
 * Exercitiul 2:
 * a)ABABABAB
 * x    y
 * 2    9
 * -7   2
 * 9
 * 7
 * 5
 * 3
 * 1
 * 
 * b) 5 perechi 
 * d)
 * citeşte x,y
    (numere naturale)
   ┌dacă x<y atunci
   │ x <- x-y
   │ y <- x+y
   │ x <- y-x
   └■
   ┌execută
   │ scrie ’A’
   │ x <- x-y
   │ scrie ’B’
   └cât timp x≥y

   c) 
 */
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x < y)
    {
        x = x - y;
        y = y + x;
        x = y - x;
    }

    while (x >= y)
    {
        cout << 'A';
        x = x - y;
        cout << 'B';
    }
    return 0;
}