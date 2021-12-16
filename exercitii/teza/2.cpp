/*
        Se da fisierul sir.in.
        Pe prima linie a fisirului se da un sir cu elementele ordonate strict crescator. Primul element
    reprezinta numarul de elemente al sirului dat < 100, iar apoi urmeaza sirul propriu-zis.
        Pe al doilea rand al fisierului se da un sir cu maxim 5 elemente. Sa se afiseze,
    pentru fiecare valoare din sirul de pe linia a doua a fisierului, 0 in cazul in care aceasta nu
    apare in sirul de pe linia I sau 1 in cazul in care aceasta este 
    prezenta in sirul de pe linia I a fisierului.
    Afisarea se face in consola.

Exemplu:
    7 1 5 9 10 14 16 20
      7 0 12 10 
Se afisaeza:
       0 0 0 1
*/

#include <iostream>
#include <fstream>

using namespace std;

int cautbin(int a[], int n, int x)
{
    int st, dr;
    st = 0;
    dr = n - 1;
    while (st <= dr)
    {
        int mij = (st + dr) / 2;
        if (a[mij] == x)
            return 1;
        else if (a[mij] < x)
            st = mij + 1;
        else
            dr = mij - 1;
    }
    return 0;
}

int main()
{
    ifstream fin("sir.in");
    int n;
    int a[100];
    fin >> n;

    for (int i = 0; i < n; i++)
        fin >> a[i];

    int x;
    while (fin >> x)
        cout << cautbin(a, n, x) << " ";

    return 0;
}