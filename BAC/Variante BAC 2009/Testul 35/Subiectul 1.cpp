/**
Exercitiul 1:
	Raspuns: c

Exercitiul 2:
	Algoritmul face suma puterilor exponentilor factorilor primi ai numarului citit in
variabila x.

	a) 4
	x		s		f		p
	140		0		2		0
	70		2		3		2
	35				4
	7		3		5		1
			4		7		1

	b) 1470 (2*3*4*5*7*7)

	d) 7 11 13 17 19 23

	c)
*/

#include <iostream>
using namespace std;

int main()
{
	int x, s, f, p;
	cin >> x;
	s = 0;
	f = 2;
	while (x > 1)
	{
		p = 0;
		while (x % f == 0)
			x /= f, p++;
		s += p, f++;
	}

	cout << s;
	return 0;
}
