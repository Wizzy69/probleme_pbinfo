/*
    Stergeti valorile care au scif imapra
*/

#include <iostream>
#include <fstream>
using namespace std;

int scif(int x)
{
    int s = 0;
    while (x)
        s += x % 10, x /= 10;
    return s;
}
int main()
{
    ifstream fin("sir.in");
    ofstream fout("sir.out");

    int x;
    int k = 0;
    int v[1000];
    while (fin >> x)
        v[k++] = x;

    for (int i = 0; i < k; i++)
        if (scif(v[i]) % 2 == 1)
        {
            for (int j = i; j < k - 1; j++)
                v[j] = v[j + 1];
            k--;
        }
    return 0;
}