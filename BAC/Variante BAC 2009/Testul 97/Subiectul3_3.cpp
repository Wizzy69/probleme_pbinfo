#include <iostream>
using namespace std;

int v[51];

void Calcul(int k, int &s)
{
    s = 0;
    for (; k <= 50; k++)
        if (v[k] > 0)
            s += v[k];
}
int main()
{
    int x, y, i;
    for (i = 1; i <= 50; i++)
        cin >> v[i];
    cin >> x >> y;
    int sumaX, sumaY;
    Calcul(x, sumaX);
    Calcul(y + 1, sumaY);
    cout << sumaX - sumaY;
    return 0;
}