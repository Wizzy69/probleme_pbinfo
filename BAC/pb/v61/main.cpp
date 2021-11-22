#include <iostream>
using namespace std;

void cifra(float x, int &y)
{
    y = ((int)x) % 10;
}

int main()
{

    float x, y;
    cin >> x >> y;

    int uCifX, uCifY;
    cifra(x, uCifX);
    cifra(y, uCifY);

    if (uCifX == uCifY ||
        (uCifX * uCifY == 0 &&
         uCifX + uCifY == 9))
        cout << "DA";
    else
        cout << "NU";

    return 0;
}