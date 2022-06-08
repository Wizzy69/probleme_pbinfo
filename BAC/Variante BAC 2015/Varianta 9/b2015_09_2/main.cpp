/*
Subiectul 2:
1. a
2. b
3. 8 7 2
4.
strncpy(a,b,strlen(b)/2); // copiaza primele strlen(b)/2 caractere din b in a
5.
*/
#include <iostream>
using namespace std;

void permutare(int a[], int n, int k)
{
    while (k > 0)
    {
        // 3 2 1 1
        int x = a[n - 1];
        for (int i = n - 1; i > 0; i--)
            a[i] = a[i - 1];
        a[0] = x;
        k--;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    int n, a[20];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        int b[20];
        for (int j = 0; j < n; j++)
            b[j] = a[j];
        permutare(b, n, i);
    }
    return 0;
}