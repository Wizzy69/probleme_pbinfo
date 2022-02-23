#include <iostream>
#include <fstream>

/*
    Algoritmul parcurge datele de intrare memorand pentru fiecare cifra citita din
fisier prima si ultima pozitie pe care apare in sir. Lungimea unui subsir este data
formula: [pozitie finala] - [pozitie initiala] + 1
    In continuare, programul calculeaza lungimea maxima, o afiseaza si apoi cauta
elementele care respecta proprietatea din cerinta.

    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge
datele de intrare o singura data, si inca 10 pasi pentru a determina cifrele care respecta proprietatea 
specificata in enuntul problemei. Astfel, algoritmul este unul liniar, cu ordin de complexitate O(n).


*/

using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int fr[10] = {0};
    int fr2[10] = {0};
    int x, nr = 0, lmax = 0;

    while (fin >> x)
    {
        if (fr[x] == 0)
        {
            fr[x] = nr;
            fr2[x] = nr;
        }
        else
        {
            fr2[x] = nr;
            if (fr2[x] - fr[x] + 1 > lmax)
                lmax = fr2[x] - fr[x] + 1;
        }
        nr++;
    }
    cout << lmax << '\n';
    for (int i = 0; i < 10; i++)
        if (fr2[i] - fr[i] + 1 == lmax)
            cout << i << " ";
    return 0;
}
