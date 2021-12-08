#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
/*
    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece
parcurge elementele fisierului o singura data.

    Algoritmul este eficient din punct de vedere al spetiului de memorie utilizat, deoarece
acesta parcurge elementele fisierului folosind doar 3 variabile simple si retine elementele 
necesare pentru afisare in alte 3 variabile simple, fara a folosi tablouri sau alte structuri complexe. 
*/
int main()
{
    int x, y, z;
    ifstream fin("bac.in");

    int X, Y, Z;
    X = 999999999, Z = 0;
    fin >> x >> y;
    while (fin >> z)
    {
        if (y > x && y > z)
            if (abs(x - z) <= abs(X - Z))
                X = x, Z = z, Y = y;

        x = y;
        y = z;
    }

    if (X == 999999999)
        cout << "nu exista";
    else
        cout << Y;
    return 0;
}