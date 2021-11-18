/**
Exercitiul 1:
	Raspuns: a

Exercitiul 2:
	a) 4061 
	n		m		p		c
   5172		1		1		1
   517		61		10		6
   51		61		100		0
   5		4061	1000	4
   0				10000

	c)
		citeste n (număr natural)
         m <- 0
         p <- 1
        ┌execută
        │ c <- n%10
        │ ┌dacă c>0 atunci
        │ │c <- c-1
        │ └■
        │ m <- m+c*p
        │ p <- p*10
        │ n <- [n/10]
        └cât timp n>0
        scrie m 
	d) 3009, 3019, 3109, 3119
	b)	
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int m, p;
	m = 0;
	p = 1;
	while (n > 0)
	{
		int c = n % 10;
		if (c > 0)
			c--;
		m = m + c * p;
		p *= 10;
		n /= 10;
	}

	cout << m;
	return 0;
}
