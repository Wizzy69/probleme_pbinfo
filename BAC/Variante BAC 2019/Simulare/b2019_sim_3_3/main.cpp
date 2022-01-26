#include <fstream>
#include <iostream>
using namespace std;

/*
    Algoritmul parcurge elementele sirului doua cate doua pentru a le verifica paritatea.
In cazul in care doua numere alaturate au paritate diferita, atunci, singura varianta ramasa pentru
ca programul sa afiseze mesajul "DA" este ca minimul din a doua jumatate a sirului sa fie mai mare decat
maximul din prima jumatate a sirului, cu proprietatea ca au paritati diferite.
    Algoritmul este eficient din punct de vedere al memoriei utilizate, deoarece foloseste doar cateva
cariabile simple.
    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge elementele sirului
o singura data, facand toate operatiile necesare in timpul citirii; complexitatea algoritmului este una liniara.

*/

int main()
{
    ifstream fin("bac.txt");

    int n, x, y;
    int maxi, mini = 9999999;
    int ok = 1;
    fin >> n >> x;
    maxi = x;
    for (int i = 1; i < n; i++)
    {
        fin >> y;
        if (x % 2 != y % 2)
            ok = 0;
        if (y > maxi)
            maxi = y;
        x = y;
    }

    if (ok == 0)
        for (int i = n; i < 2 * n; i++)
        {
            fin >> y;
            if (y < mini && y % 2 != maxi % 2)
                mini = y;
            x = y;
        }
    else
        for (int i = n; i < 2 * n; i++)
        {
            fin >> y;
            if (x % 2 != y % 2)
                ok = 0;
            if (y < mini && y % 2 != maxi % 2)
                mini = y;
            x = y;
        }

    if (ok == 1 || mini > maxi)
        cout << "DA";
    else
        cout << "NU";

    return 0;
}