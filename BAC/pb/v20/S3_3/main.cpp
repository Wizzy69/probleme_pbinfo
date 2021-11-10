#include <iostream>

using namespace std;

void nule(int a[100], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == 0 && a[j] != 0)
            {
                a[i] = a[j];
                a[j] = 0;
            }
}

int main()
{
    int a[] = {1, 2, 0, 4, 0, 3, 2};
    nule(a, 7);
    for (int i = 0; i < 7; i++)
        cout << a[i] << " ";
    return 0;
}
