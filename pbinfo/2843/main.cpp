#include <iostream>
#include <fstream>
using namespace std;

int fr[10];
int getpow(int x)
{
    int p = 0;
    while (x != 1)
        x /= 10, p++;
    return p;
}

int getnum(int pow)
{
    int x = 1;
    while (pow)
        x *= 10, pow--;
    return x;
}

int main()
{
    ifstream fin("puteri6.in");
    ofstream fout("puteri6.out");
    int n;
    fin >> n;
    int x;
    while (fin >> x)
        fr[getpow(x)]++;

    for (int i = 0; i < 10; i++)
    {
        n -= fr[i]; // scade numarul de numere
        if (n < 1)
        {
            fout << getnum(i);
            return 0;
        }
    }

    if (n > 0)
        cout << "Nu exista";
    return 0;
}