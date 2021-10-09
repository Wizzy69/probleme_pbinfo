#include <iostream>

using namespace std;

int main()
{
	int z,l,a,nz;
	cin>>z>>l>>a;
	if(z < 1 || l<1 || l > 12) cout << "NU";
	else
	{
		if(l==2)
			if(a%4==0 && a%100!=0 || a%400==0)
				nz=29;
	       		else
			       	nz=28;
		else 
			if(l==4 || l==6 || l==9 || l==11)
				nz=30;
			else nz=31;
		if(z>nz) 
			cout << "NU";
		else
			cout << "DA";
	}
}
