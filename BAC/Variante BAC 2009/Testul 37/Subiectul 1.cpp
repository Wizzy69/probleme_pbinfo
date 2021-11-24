/**
Exercitiul 1:
	Raspuns: c

Exercitiul 2:
	Algoritmul dubleaza numarul de aparatii in numarul memorat in variabila n
a cifrei memorata in variabila k.

	a) 122322
	n		k		nr		p		c
	1232	2		0		1		2
					2		10		
					22		100
	123				322		1000	3
	12				2322	10000	2
	1				22322	100000	
					122322	1000000	1
	0
	122322	

	b) (11, 1), (22, 2), (33,3), (44,4), (55,5), (66,6), (77,7), (88,8), (99,9)
	
	c)
	citeşte n,k
		 (numere naturale, k≤9)
	nr <- 0; p <- 1
	┌execută
	│ c  <-  n%10
	│ nr  <-  nr+c*p
	│ p  <-  p*10
	│ ┌dacă c=k atunci
	│ │ nr  <- nr+c*p
	│ │ p <- p*10
	│ └■
	│ n  <-  [n/10]
	└cât timp n≠0 
	n <- nr
	scrie n 

	d)
*/

#include <iostream>
using namespace std;
int main()
{
	int n, k, nr, p, c;

	cin >> n >> k;
	nr = 0;
	p = 1;

	while (n != 0)
	{
		c = n % 10;
		nr = nr + c * p;
		p *= 10;
		if (c == k)
		{
			nr = nr + c * p;
			p *= 10;
		}
		n /= 10;
	}

	n = nr;
	cout << n;

	return 0;
}
