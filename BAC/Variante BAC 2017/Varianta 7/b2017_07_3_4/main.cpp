#include <iostream>
#include <fstream>
using namespace std;

/*
    Algoritmul citeste datele din fisier si le pune intr-un vector de numarare.
Prima data cauta doua valori ale caror frecventa in sirul date este > 1. In cazul in care nu gaseste, programul afiseaza
textul "nu exista". In cazul in care se gasesc doua numere cu conditia specificata mai sus, se calculeaza
ratia ca fiind diferenta dintre cele doua numere.
    In continuare,  algoritmul verifica daca urmatorul numar care are frecventa mai mare decat unu se poate scrie ca cel
anterior plus ratia gasita. In cazul in care nu se poate, inseamna ca numerele nu sunt in progresie aritmetica.

    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge o singura data datele
de intrare din fisier si mai face un numar constant de 1001 de pasi; algoritmul este unul liniar.

*/

int main()
{
    ifstream fin("bac.in");
    int fr[1001] = {0};
    int x, r = -1;
    while (fin >> x)
        fr[x]++;
    int i, y = -1;
    x = -1;
    for (i = 0; i < 1001; i++)
        if (x == -1 && fr[i] > 0)
            x = i;
        else if (x != -1 && y == -1 && fr[i] > 0)
        {
            y = i;
            break;
        }
    if (y == -1 || x == -1)
    {
        cout << "NU";
        return 0;
    }
    r = y - x;
    i++;

    for (; i < 1001; i++)
        if (fr[i] > 0 && y + r == i)
            y = i;
        else if (fr[i] > 0 && i != y + r)
        {
            r = -1;
            cout << "NU";
            break;
        }
    if (r != -1)
        cout << r;

    return 0;
}