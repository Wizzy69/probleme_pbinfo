#include <iostream>
#include <fstream>

using namespace std;
int Palindrom(int n)
{
    int og = 0;
    int nn = n;
    while (n)
    {
        og = og * 10 + n % 10;
        n /= 10;
    }

    if(og == nn)
        return 1;
    return 0;
}

int main()
{
    ifstream fin("NUMERE.IN");


}