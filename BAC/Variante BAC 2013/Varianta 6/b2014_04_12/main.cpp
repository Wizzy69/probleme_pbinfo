/*
Subiectul 1:
    1. b
    2.
    a) Numara cate valori au cel putin 2 cifre identice
    b) 2222, 3333, 4444, 5555, 6666, 7776
    c)
    citeşte a,b
     (numere naturale nenule, a≤b)
     nr<-0
     i<-a
    ┌execută
    │ x<-i
    │ c<-x%10
    │┌cât timp x≠0 şi x%10=c execută
    ││ x<-[x/10]
    │└■
    │┌dacă x=0 atunci
    ││ nr<-nr+1
    │└■
    │ i <- i + 1
    └cât timp i ≠ b
    scrie nr

    d)

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, nr, i, x, c;
    cin >> a >> b;
    nr = 0;
    for (int i = a; i <= b; i++)
    {
        x = i;
        c = x % 10;
        while (x != 0 && x % 10 == c)
            x /= 10;
        if (x == 0)
            nr++;
    }
    cout << nr;
    return 0;
}

/*
    Subiectul 2:
    1. d
    2. b
    3. 8,5,4
    4.  
    struct punct {
        int x,y;
    } p;
    struct dreptunghi {
        punct A, B;
    } d; 

    (p.x > d.A.X && p.x < d.B.x && p.y > d.A.y && p.y < d.B.y)
    5.
*/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    int n = strlen(s);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == ' ')
        {
            char aux[101];
            strcpy(aux, s + i + 1);
            strcpy(s + 1, aux);
            n--;
            i--;

        }
    }

    s[n] = '\0';
    cout << s;
    return 0;
}

