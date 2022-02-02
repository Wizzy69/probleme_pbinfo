/*
Subiectul 1:
    1. c
    2. Face suma patratelor cifrelor numarului
    a) Se afiseaza: 69
    b) 86, 68, 680, 860
    c)

    citeşte n
     (număr întreg nenul)
    ┌dacă n<0 atunci
    │ n <- -n
    └■
     s <- 0
    ┌repetă
    │ x <- n%10
    | s <- s + x*x
    │ n <- [n/10]
    └până când n=0
    scrie s

    d)



#include <iostream>
using namespace std;

int main()
{
    int n, x, s;
    cin >> n;
    if (n < 0)
        n = -n;
    s = 0;
    do
    {
        x = n % 10;
        for (int i = 1; i <= x; i++)
            s += x;
        n /= 10;
    } while (n != 0);

    cout << s;
    return 0;
}


Subiectul 2:
    1. b
    2. b
    3. 1 6 8
    4.
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            if(i==j || i+j==8) a[i][j] = 0;
            else a[i][j] = (i+j) % 8;

    5.
*/

#include <iostream>
#include <cstring>

//#pragma warning(disable : 4996);
using namespace std;

int main()
{
    char s[101], c[101];
    cin >> s >> c;

    char a[101];
    int ns = strlen(s);
    int cnt = 0;
    a[0] = s[0];
    for (int i = 1; i < ns; i++)
    {
        if ((c[i] - '0') % 2 == 0) // in fata
        {
            char aux[101];
            strcpy(aux, a);
            a[0] = s[i];
            a[1] = 0;
            strcpy(a + 1, aux);
        }
        else
            strncat(a, s + i, 1);
    }
    cout << a;
    return 0;
}