#include <iostream>
#include <fstream>

using namespace std;

void cmax(int a, int &b);

int main()
{
    ifstream fin("bac.txt");
    int nrMIN;
    int cMAX;
    int x;

    fin >> x;
    nrMIN = x;
    cmax(x, cMAX);
    
    while (fin >> x)
    {
        int c;
        cmax(x, c);
        if (c == cMAX)
            if (x < nrMIN)
                nrMIN = x;
        if (c > cMAX)
            cMAX = c, nrMIN = x;
    }
    
    cout << cMAX << " " << nrMIN;
}
void cmax(int a, int &b)
{
    b = -1;
    do
    {
        if (a % 10 > b)
            b = a % 10;
        a /= 10;
    } while (a);
}