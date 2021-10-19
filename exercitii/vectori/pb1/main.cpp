#include <iostream>
using namespace std;

void sub(double v[2000], int &n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];

    for (int i = 0; i < n; i++)
    {
        n++;
        for (int j = n; j >= i; j--)
            v[j + 1] = v[j];
        v[i] = sum;
        i++;
    }
}

int main()
{
    int n;
    double v[2000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sub(v, n);
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}