/*
    Se dau doua siruri ord cresc.
    Sa se realizeze reuniunea celor doua siruri.
Elem comune se afiseaza doar o data. 
Elem se afiseaza in ord crescatoare.

*/

#include <fstream>
#include <iostream>
using namespace std;

int main()
{

    ifstream f("sir2.in");
    int a[100], b[100], n, m;
    f >> n >> m;
    for (int i = 0; i < n; i++)
        f >> a[i];
    for (int i = 0; i < m; i++)
        f >> b[i];
    int i = 0;
    int j = 0;
    while (i < n && j <m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    while (i < n)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < m)
    {
        cout << b[j] << " ";
        j++;
    }

    return 0;
}