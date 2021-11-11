/**
Exercitiul 1:
	Raspuns: c)

Exercitiul 2:
	a) 12345678901
	c)
    	citeste n (număr natural)
    	c <- 0
    	┌cat timp n>0
    	│ c <- (c+1)%10
    	│ scrie c
		| n <- n-1
    	└■
	d) 10
b)
*/

#include <iostream>

using namespace std;

int main()
{
	int n, c;
	cin >> n;
	c = 0;
	for (int i = 0; i < n; i++)
	{
		c = (c + 1) % 10;
		cout << c;
	}
	return 0;
}
