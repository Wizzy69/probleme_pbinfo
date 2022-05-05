/*
    Algoritmul citeste de pe prima linie a fisierului dat cele doua numere (x si y)
si le aranjeaza astfel incat x <= y. Apoi parcurge sirul de numere de pe linia a II-a a
fisierului cu datele de intrare si verifica ce valori trebuie afisate:
    - doar numarul din fisier (de la pasul curent) daca:
        a) numarul citit este mai mic decat x si y
        b) numarul citit este mai mic decat y si mai mare decat x (unde x a fost afisat anterior)
        c) numarul citit este mai mare decat x si y (unde x si y au fost afisate anterior)

    - afiseaza x si numarul din fisier daca numarul din fisier este mai mare decat x si x nu a fost afisat
    - afiseaza y si numarul din fisier daca numarul din fisier este mai mare decat y si y nu a fost afisat

    Algoritmul este eficient din punct de vedere al memoriei, deoarece foloseste doar cateva
variabile simple pentru parcurgerea datelor din fisierul de intrare.
    Algoritmul este eficient din punct de vedere al timpului de executare, deoarece parcurge o singura data
datele de intrare pentru a determina si afisa numarul cerut, ordinul de complexitate fiind O(n).

*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("bac.txt");
    int x, y;
    fin >> x >> y;
    if (x > y)
    {
        int aux = x;
        x = y;
        y = aux;
    }

    int z;
    while (fin >> z)
    {
        if (z > x && x != -1)
        {
            cout << x << " " << z << " ";
            x = -1;
        }
        else if (z > y && y != -1)
        {
            cout << y << " " << z << " ";
            y = -1;
        }
        else
            cout << z << " ";
    }

    if (x != -1)
        cout << x << " " << y;
    else if (y != -1)
        cout << y;

    return 0;
}