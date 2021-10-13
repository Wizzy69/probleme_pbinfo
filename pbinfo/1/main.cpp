#include <iostream>
#include <fstream>
 
using namespace std;

int main()
{
    ifstream fin("sum.in");
    ofstream fout("sum.out");

    int x, y;
    fin >> x >> y;
    fout << (x + y);
}