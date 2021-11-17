/**
Exercitiul 1:
	Raspuns: d

Exercitiul 2:
	a)9183672144288
	a		b
	9		150
	18
	36
	72
	144
	288

	b)37

	d)
	citeşte a,b
    	 (numere naturale nenule)
    ┌dacă a>b atunci
    │ c <- b
    │ b <- a
    │ a <- c
    └■
    ┌execută
    │ scrie a
    │ a <- a*2
    └cât timp a<=b 
    scrie a
	
	c)
*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	if (a > b)
	{
		c = b;
		b = a;
		a = c;
	}
	while (a <= b)
	{
		cout << a << " ";
		a *= 2;
	}
	cout << a;
	return 0;
}