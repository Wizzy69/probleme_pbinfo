/*
Subiectul 3:
1. b
2. 10 2
3.
*/
void produs(int a, int &k)
{
	k = 1;
	int p = 1;
	for (int d = 3; d <= a; d += 2)
	{
		p *= d;
		if (p <= a)
			k = d;
		else
			break;
	}
}
