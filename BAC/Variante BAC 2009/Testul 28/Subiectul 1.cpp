/**
Exercitiul 1:
	Raspuns: d)

Exercitiul 2:
	a) 2 
	x	 		y
	120.12 		120
	0.12
	1.2
	12
    c)
	    citeste x
        (număr real pozitiv)
        y <- [x]
        x <- x-y
        ┌daca x≠[x] atunci
        |┌execută
        |│ x <- x*10
        |└cât timp x≠[x]
        └■ 
        ┌dacă x=y atunci
        │ scrie 1
        │altfel
        │ scrie 2
        └■
	d)12.12
	
	b)
*/
#include <iostream>
using namespace std;
int main()
{
	double x;
	int y;
	cin >> x;
	y = (int)x;
	while (x != (int)x)
		x *= 10;

	if (x == y)
		cout << 1;
	else
		cout << 2;
	return 0;
}