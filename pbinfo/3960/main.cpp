#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("intersectie.in");
    int nr = 0;
    int x;
    while (fin >> x)
        if (x == 0)
            nr++;

    int **a = new int *[nr];
    for (int i = 0; i < nr;i++)
    {
        a[i] = new int[99999];
        for(int i)
    }

}