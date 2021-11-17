/**
Exercitiul 1:
	Raspuns: b

Exercitiul 2:
	a) 7
	a	j	i	n
	12	3	1	10
	15	4	2
	11	3	3
	14	4	4
	10	3	5
	13	4	6
	9	3	7
	12	4	8
	8	3	9
	11	4	10
	7	3	11		

	b) 3
	
	d)
	citeşte a,n
	   (numere naturale)
	┌dacă n%2=0 atunci 
	|	a <- a-[n/2]
    │altfel
	|   a <- a-[n/2]-3
    └■
	scrie a

	c)
	
*/
#include <iostream>
using namespace std;

int main()
{
	int a, n;
	cin >> a >> n;
	int j = 3;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			a -= j;
		else
			a += j;
		j = 7 - j;
	}
	cout << a;
	return 0;
}