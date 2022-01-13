/**
Subiectul 1:
   1. a
   2. b
   3. b
   4. b
   5. c

Subiectul 2:
   1.
   a) 3

   m     n     p     q     s1    s2    s
   4     3     11    25    0     0     3
               12          1     1
               13
               14
               15          2
               16          3
               17
               18          4
               19
               20          5
               21          6
               22
               23
               24          7     2
               25

   b) 25 26
   c)     
*/

#include <iostream>
using namespace std;

int main()
{
   int m, n, p, q, s1, s2, s;
   cin >> m >> n >> p >> q;
   s1 = s2 = 0;
   while (p <= q)
   {
      if (p % m == 0 || p % n == 0)
         s1++;
      if (p % m == 0 && p % n == 0)
         s2++;
      p++;
   }
   s = s1 - 2 * s2;
   cout << s;
   return 0;
}

/*

   d)
   citeşte m,n,p,q
      (numere naturale nenule, p≤q)
   s1<-0; s2<-0

   ┌pentru i<-p, q execută
   │┌dacă i%m=0 sau i%n=0 atunci
   ││ s1<-s1+1
   │└■
   │┌dacă i%m=0 şi i%n=0 atunci
   ││ s2<-s2+1
   │└■
   │ i <- i+1
   └■
   s<-s1-2*s2
   scrie s 

   2. 4,1,2,6,5
   
   3. 
   fig.centru.x = 0;
   fig.centru.y = 0;
   fig.raza = 1;
*/

