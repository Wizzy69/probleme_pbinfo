/*
Subiectul 1:
   1. b
   2. c
   3. a.
   4. d
   5. b

Subiectul 2:
   1. a) 1227
   n        m        x        cp
   27102    0        1        27102
            1                 271
                     2        27102
            1227     7       
      
      b) 11, 110

      c) 
*/
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int m, x, cp;
   m = 0;
   x = 1;
   while (x <= 9)
   {
      cp = n;
      while (cp != 0)
      {
         if (cp % 10 == x)
            m = m * 10 + x;
         cp /= 10;
      }
      x++;
   }
   cout << m;
   return 0;
}

/*
   d) 
   citeşte n
      (număr natural)
 m <- 0
┌pentru x<-1, 9 execută
│ cp <- n
│┌cât timp cp≠0 execută
││┌dacă cp%10=x atunci
│││ m <- m*10+x
││└■
││ cp <- [cp/10]
│└■
└■
 scrie m

   2. 
   int len = strlen(b);
   if(len < 3)
      strcpy(a, "nedeterminat");
   else strcpy(a, b + (len-3));

   3. (p.x == c.centru.x && p.y == c.centru.y)
*/