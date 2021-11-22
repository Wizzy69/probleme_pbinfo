#include <iostream>
using namespace std;

int calcul(int n, int k)
{

    int ord = 1;
    while (n > 0)
    {
        if (ord == k)
            return n % 10;
        ord++;
        n = n / 10;
    }

    return -1;
}

int main()
{

    int n;
    cin >> n;

    int k = 1, cifra, ok = 1;

    while ((cifra = calcul(n, k)) != -1)
    {

        if (cifra > k)
        {
            ok = 0;
            break;
        }
        k++;
    }

    if (ok == 0)
        cout << "Nu";
    else
        cout << "Da";
}