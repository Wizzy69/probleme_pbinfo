/**
 * Exercitiul 1:
 *  Raspuns: d)
 * Exercitiul 2:
 *  a) 17396
 *  x    y
 * 12    0
 *  1    1
 * 7    17
 * 354
 * 3    173
 * 9    1739
 * 630  
 * 6    17396
 * 0
 * 
 * 
 * b)  30 20 10
 * d) 
     citeşte x 
     (număr natural) 
     y <- 0 
     ┌dacă x≠0 atunci
     | ┌execută
     | | ┌dacă x≠0 atunci
     | │ │ ┌execută
     | │ │ │ x <- [x/10] 
     │ │ │ └cât timp x>9
     | | └■
     | │ y <- y * 10 + x 
     | │ citeşte x 
     | └cât timp x≠0 
     └■
     scrie y
 c)
 */
#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cin >> x;
    y = 0;
    while (x)
    {
        while (x > 9)
            x /= 10;
        y = y * 10 + x;
        cin >> x;
    }
    cout << y;
    return 0;
}
