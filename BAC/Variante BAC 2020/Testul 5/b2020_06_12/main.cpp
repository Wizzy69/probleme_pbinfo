/*
    Subiectul 1:
        1. b
        2. c
        3. c
        4. d
        5. b
    
    Subiectul II:
        a) 5 NU
    n       m       c   
    247388  0       8
    24738   8       8
    2473    16      3
    247     10      7
    24      17      4
    2       9       2
    0       5

    b) 126, 138
    
    c)  
*/
#include <iostream>
using namespace std;

int main()
{
    int n, m, c;
    cin >> n;
    m = 0;
    do
    {
        c = n % 10;
        n /= 10;
        if (c < 5)
            m -= 2 * c;
        else
            m += c;
    } while (n);

    if (m == 0)
        cout << "DA";
    else
        cout << m << "NU";
    return 0;
}

/*
    d) 
    citește n (număr natural)
    m <- 0
    ┌cat timp n != 0 executa
    │ c <- n%10; n <- [n/10]
    │┌dacă c<5 atunci m <- m-2*c
    ││altfel m <- m+c
    │└■
    └■
    ┌dacă m=0 atunci scrie ‘DA’
    │altfel scrie m, ‘NU’
    └■

    2. 
    struct procesor
    {
        char producator;
        int frecventa;
        double pret;
    }p[20];

    3. 
    for(int i=0;i<5;i++)
        for(int j=i+1; j<6;j++)
            if(a[i][2]%2==0 && a[j][2]%2==0 && a[i][3] > a[j][3])
            {
                int aux = a[i][2];
                a[i][2]=a[j][2];
                a[j][2] = aux;
            }
*/