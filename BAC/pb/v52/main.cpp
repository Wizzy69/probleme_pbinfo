#include <iostream>
#include <fstream>
using namespace std;

bool mult(int n, int *a)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i] == a[j] && i != j)
                return false;
    return true;
}

int main()
{
    ifstream fin("date.in");
    int c = 0;
    int *a = (int *)calloc(400, sizeof(int));
    int x;
    int ok = 1;
    while (fin >> x)
    {
        for (int i = 0; i < c; i++)
            if (x == a[i])
            {
                ok = 0;
                break;
            }
        if (ok == 0)
            break;

        a[c++] = x;
    }

    cout << c;
}