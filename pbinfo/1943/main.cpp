#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("bacterie.in");
    ofstream g("bacterie.out");
    long long int n, m;
    f >> n >> m;
    long long int min;
    if (n < m)
        min = n;
    else
        min = m;
    long long int s = min * (min + 1) / 2;
    g << n * m - s;
    return 0;
}