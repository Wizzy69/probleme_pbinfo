#include <iostream>
#include <fstream>

using namespace std;
//a)
void p(int &n, int c);

int main()
{
    ifstream fin("BAC.IN");
    ofstream fout("BAC.OUT");
    int x, aux;
    while (fin >> x)
    {
        aux = x;
        p(x, 1);
        p(x, 3);
        p(x, 5);
        p(x, 7);
        p(x, 9);

        if (aux != x)
            fout << x << " ";
    }
}

void p(int &n, int c)
{
    int p = 1;
    int a = 0;
    do
    {
        a = n % 10 * p + a;
        p *= 10;
    } while (n);
    n = a;
}