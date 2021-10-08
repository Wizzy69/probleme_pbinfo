/**
 * Exercitiul 1:
 *   Raspuns: b)
 * Exercitiul 2:
 * a) 17 15 13 11 9 7 5
    citeşte a,b (numere întregi) 
    ┌dacă a<b atunci 
    │ a↔b 
    └■
    ┌pentru x<-a,b,-1 execută
    │ ┌dacă x%2≠0 atunci 
    │ │ scrie x,’ ’ 
    │ └■
    └■

    b) 
    a = 1,2
    b = -1

    c)
    citeşte a,b (numere întregi) 
    ┌dacă a<b atunci 
    │ a<->b 
    └■
    x <- a
    ┌cat timp x>=b execută
    │ ┌dacă x%2≠0 atunci 
    │ │ scrie x,' '
    │ └■
    |  x <- x-1
    └■

    d)
 */
#include <iostream>
using namespace std;
int main()
{
    int a, b, x;
    cin >> a >> b;

    if(a < b)
    {
        int aux = a;
        a = b;
        b = aux;
    }

    for (x = a; x >= b;x--)
        if(x%2!=0)
            cout << x << ' ';
}