#include <iostream>
using namespace std;

bool verif(int x)
{
    int i;
    for (i = 2; i * i < x;i++)
        if(x%i==0)
            return false;
    if (i * i == x)
        return true;
    return false;
}

int main()
{
    int n, a, b;
    cin >> a >> b;
    n = 0;
    for (int i = a; i <= b;i++)
       if(verif(i))
           n++;
    cout << n;
    return 0;
}