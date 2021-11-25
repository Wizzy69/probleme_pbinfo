/**
Exercitiul 1:
	Raspuns: b

Exercitiul 2:
	Programul face suma dintre oglinditul fiecarui numar format din ultimele doua cifre
	 ale numarului memorat in variabila v. (stiu ca nu suna a romana :D ) 

	a) 249
	s		v		a		b
	0		114		4		1
	41		123		3		2
	73		517		7		1
	144		3312	2		1
	165		14		4		1
	206		412		2		1
	227		22		2		2
	249		0

	b) Practic, este suma Gauss de la 1 pana la 99
		4950

	d)
	s <- 0
    citeşte v (valoare naturală)
    ┌execută
    │ a  <-  v%10
    │ b  <-  [v/10]%10
    │ s  <-  s + a*10 + b
    │ citeşte v
    └cât timp v ≠ 0
    scrie s 
	
	c)
*/
#include <iostream>
using namespace std;

int main()
{
	int s, a, b, v;
	s = 0;
	cin >> v;
	while (v != 0)
		a = v % 10,
		b = v / 10 % 10,
		s = s + a * 10 + b,
		cin >> v;
	cout << s;
	return 0;
}