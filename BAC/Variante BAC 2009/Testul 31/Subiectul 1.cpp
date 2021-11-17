/**
Exercitiul 1:
	Raspuns: b

Exercitiul 2:
	a) 0 7
	a		k		b
	9		0		60
			1		51
			2		42
			3		33
			4		24
			5		15
			6		6
			7		0
	
	b) 1
	d) 
	citeşte a
    	(număr natural, a>0)
    k <- 0
    b <- [(a+1)*(a+2)/2]
    scrie b % a, (b - b % a) / a
	c)
*/

/*
	ax + r = b
	r=b%a
	-> x = (b-b%a)/a;
*/

#include <iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int b, k;
	k = 0;
	b = ((a + 1) * (a + 2)) / 2;
	while (b >= a)
	{
		b -= a;
		k++;
	}
	cout << b << " " << k;
	return 0;
}
