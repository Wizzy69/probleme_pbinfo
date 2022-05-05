/*
1.
a) 3 4 6 5 9 15
b) (3,3,3), (3,2,2)
c)
for(int i = 0;i <=n;i++)
    if((i%x ==0 && i%y != 0) || (i%x!= 0 && i%y==0))
    {
        cout << i << " ";
        ok=1;
    }

d)
citește n,x,y
 (numere naturale nenule, x≤n, y≤n)
 ok<-0
 i<-1
┌cat timp i≤n execută
│┌dacă (i%x=0 și i%y≠0) sau
││ (i%x≠0 și i%y=0) atunci
││ scrie i, ' '
││ ok<-1
│└■
| i <- i + 1
└■
┌dacă ok=0 atunci scrie 0
└■

2. ARMONIA
3. a[0].dp.anNastere = 2000;
    a[0].venit = 4000;

*/