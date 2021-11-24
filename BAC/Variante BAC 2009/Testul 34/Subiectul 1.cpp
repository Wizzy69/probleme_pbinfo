/**
Exercitiul 1:
	Raspuns: a

Exercitiul 2:
	a)38 47 56
	x		y
	148		203
	8		3
	3		8
	4		7

	b) 60 189

	d) 
	citeşte x,y
	 		(numere naturale)
	x <- x%10
	y <- y%10
	
	┌dacă y<x atunci
	│ aux <- y
	│ y <- x
	│ x <- aux
	└■
	
	┌pentru i <- x,y executa
	│ scrie x*10+y
	│ y <- y-1
	└■ 
	
	c)
*/
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	x = x % 10;
	y = y % 10;

	if (y < x)
	{
		int aux = y;
		y = x;
		x = aux;
	}

	while (x <= y)
	{
		cout << x * 10 + y << " ";
		x++, y--;
	}

	return 0;
}