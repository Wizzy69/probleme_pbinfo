/**
Exercitiul 1:
	Raspuns: a

Exercitiul 2:
	a) 4601 
	n		m		p		c
   5172     0		1		2
   570		1		10		1
   57		1		100		0
							7
	5	   601	   1000		6
							5
	0		4601			4

	c)
	citeste n (număr natural)
 m <- 0 
 p <- 1 
┌execută
│ c <- n%10 
│ ┌dacă c>0 atunci 
│ │c <- c-1 
│ └■
│ m <- m+c*p 
│ p <- p*10 
│ n <- [n/10] 
└cât timp n>0
scrie m

d)

*/
