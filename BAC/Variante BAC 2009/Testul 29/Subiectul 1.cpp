/**
Exercitiul 1:
	Raspuns: a)

Exercitiul 2:
	a) 9 
	n		m
	6		12
	7		11
	8		10
	9		9
	10		8
	9		9
	
	c) 9 11
	   8 12

	d)
	  citeste n,m
            (numere naturale)
      scrie [(n+m)/2] 
	b)
*/
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	while (n <= m)
		n++, m--;
	while (m < n)
		m++, n--;
	cout << n;
	return 0;
}