#include <iostream>
using namespace std;

void aranjare(int a[100], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] >= 0)
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
}

int main()
{
    int a[] = {-2, 0, 16, -7, 2, 6};
    aranjare(a, 6);
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";
}