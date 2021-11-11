/**
Exercitiul 1:
	Raspuns: a)

Exercitiul 2:
	a)2329

	a		b		c		d		p
	493   1836      0		0		1
	49	  183		9->0	9		10
	4	  18		12->1	29		100
	0	  1		    13->1	329		1000
	0	  0		    2->0	2329	10000

c)
citeste a,b
 (numere naturale)
 c <- 0
 d <- 0
 p <- 1
 [!] Daca a=b=0 => c=d=0 => putem evita acel 'daca'
┌execută 
│ c <- a%10+b%10+c
│ d <- d+(c%10)*p
│ p <- p*10
│ a <- [a/10]
│ b <- [b/10]
│ c <- [c/10]
└cât timp a+b+c>0 
scrie d 

d) ?

b)
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, p;
	cin >> a >> b;
	c = d = 0;
	p = 1;
	while (a + b + b > 0)
	{
		c = a % 10 + b % 10 + c;
		d = d + (c % 10) * p;
		p *= 10;
		a /= 10;
		b /= 10;
		c /= 10;
	}
	cout << d;
	return 0;
}
