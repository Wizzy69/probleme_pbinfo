#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        suma += x;
    }

    cout << suma;
}