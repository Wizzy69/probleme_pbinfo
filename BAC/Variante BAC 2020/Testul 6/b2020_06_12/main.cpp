/**
 * Subiectul 1:
 * 1. d
 * 2. b
 * 3. c
 * 4. c
 * 5. a
 * 
 * Subiectul 2:
 * 1.
 *  Algoritmul parcurge toate cifrele pare, de la 0 la 8 (in variabila c) si cauta in variabila a daca acestea exista.
 *  Afiseaza 1 daca cifra respectiva este prezenta in numarul memorat in variabila a sau 0 in caz contrar. 
 *  a) 1 1 1 0 0
 *  a       c       b       x
 *240107    0     240107    0
                   24010    1
                    2401
            2         2     1
            4         24    1
            6         0     0
            8         0     0
            10

    b)  102468
        986420
    
    c) 
*/
#include <iostream>
using namespace std;

int main()
{
    int a, c, b, x;
    cin >> a;
    c = 0;
    do
    {
        b = a;
        x = 0;
        do
        {
            if (b % 10 == c)
                x = 1;
            b /= 10;
        } while (b != 0 && x != 1);

        cout << x << " ";
        c += 2;
    } while (c <= 9);
    return 0;
}
/**
 d)
   citește a (număr natural)
   c←0
   ┌repetă
   │  b←a; x←0
   | ┌daca b=0 si c=0
   | │ x←1
   | └■
   │ ┌cat timp b!=0 si x!=1 executa
   │ │┌dacă b%10=c atunci
   │ ││ x←1
   │ │└■
   │ │ b←[b/10]
   │ └■
   │ scrie x,’ ’
   │ c←c+2
   └până când c>9
 
 2. 
 */

struct calculator
{
    char monitor;
    struct
    {
        int interna, externa;
    } memorie;
} c;

/*
 3.
    if(i < j && i + j > 8)
         a[i][j] = '<';
    else a[i][j] = '>';
*/