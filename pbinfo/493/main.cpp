#include <iostream>
using namespace std;

int scif(int n)
{
    return n < 10 ? n : n % 10 + scif(n / 10);
}

int main()
{
    int n;
    cin >> n;

    int a[200];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    /**
    am incercat si altfel:
    
    int y[200], k = 0;
    while (k < n)
        y[k++] = a[k] % scif(a[k]);

    for (int i = 0; i < n; i++)
        cout << y[i] << " ";

    Pe pbinfo da Caught fatal signal 8, dar cand am testat la mine pe 
    calculator a functionat ...
    */

    int y[200], k = 0;
    while (k < n)
        y[k] = a[k] % scif(a[k++]);

    for (int i = 1; i <= n; i++)
        cout << y[i] << " ";
}