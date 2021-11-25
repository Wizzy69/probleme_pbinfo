#include <iostream>
using namespace std;

struct fractie
{
    int numa, numi;
} f1, f2, f3;
void citire(fractie &f)
{
    cin >> f.numa;
    cin >> f.numi;
}

int cmmdc(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void suma()
{
    f3.numa = f1.numa * f2.numi + f1.numi * f2.numa;
    f3.numi = f1.numi * f2.numi;
}

int main()
{
    citire(f1);
    citire(f2);
    suma();
    int cm = cmmdc(f3.numa, f3.numi);
    cout << f3.numa / cm << " " << f3.numi / cm;
    return 0;
}